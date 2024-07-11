#include <iostream>
#include <vector>
#include <algorithm>

bool issame(pair<float, float> a, pair<float, float> b) {
    return a.first == b.first && a.second == b.second;
}

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = make_pair(numbers[0], numbers[1]);

    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            closest_elements = make_pair(numbers[i], numbers[i + 1]);
        }
    }

    return closest_elements;
}

int main() {
    vector<float> numbers = {3.5, 2.1, 5.8, 1.2, 4.9};
    pair<float, float> result = find_closest_elements(numbers);

    cout << "Closest elements: " << result.first << " and " << result.second << endl;

    return 0;
}