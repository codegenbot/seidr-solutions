#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

bool issame(pair<float, float> a, pair<float, float> b) {
    return a == b;
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair;
    float min_diff = numeric_limits<float>::max();
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest_pair.first, closest_pair.second};
}

int main() {
    vector<float> numbers = {3.5, 1.2, 4.8, 2.3, 5.1};
    vector<float> closest_elements = find_closest_elements(numbers);
    
    for (const auto& element : closest_elements) {
        cout << element << " ";
    }
    
    return 0;
}