```
#include <algorithm>
#include <vector>
#include <limits>
#include <iostream>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != 2 || b.size() != 2)
        return false;
    return std::abs(a[0] - a[1]) == std::abs(b[0] - b[1]);
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest_pair;
    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            vector<float> pair_numbers({numbers[i], numbers[j]});
            float diff = abs(numbers[j] - numbers[i]);
            if (diff < min_diff && !issame(pair_numbers, {numbers[i], numbers[j]}) ) {
                min_diff = diff;
                closest_pair = make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return vector<pair<float, float>>({closest_pair});
}

int main() {
    vector<float> numbers = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    vector<pair<float, float>> result = find_closest_elements(numbers);
    for (const auto& pair : result) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
}