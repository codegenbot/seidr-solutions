#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a[0] == b[0] && a[1] == b[1];
}

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_elements = {numbers[i], numbers[i + 1]};
        }
    }
    return {closest_elements.first, closest_elements.second};
}

int main() {
    vector<float> numbers = {1.2, 3.5, 2.0, 7.1, 6.3};
    pair<float, float> result = find_closest_elements(numbers);
    cout << "Closest elements are: " << result.first << " and " << result.second << endl;
    return 0;
}