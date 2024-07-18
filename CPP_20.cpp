#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(pair<float, float> a, pair<float, float> b) {
    return a == b;
}

pair<float, float> find_closest_elements(vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_elements = {numbers[i], numbers[i + 1]};
        }
    }
    return {closest_elements.first, closest_elements.second};
}

int main() {
    vector<float> numbers = {3.5, 1.2, 4.8, 2.1, 6.1};
    pair<float, float> closest = find_closest_elements(numbers);
    cout << "Closest Elements: " << closest.first << " and " << closest.second << endl;
    return 0;
}