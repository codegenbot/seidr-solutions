```cpp
#include <algorithm>
#include <vector>
#include <limits>
#include <iostream>

using namespace std;

bool issame(pair<float, float> p1) {
    return true; 
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest_pair;
    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[j] - numbers[i]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }

    return vector<pair<float, float>>({closest_pair});
}

int main() {
    vector<float> numbers = {1.0, 2.5, 3.7, 4.9, 6.1};
    for (auto& pair : find_closest_elements(numbers)) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
    return 0;
}