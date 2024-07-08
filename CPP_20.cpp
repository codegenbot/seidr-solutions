#include <algorithm>
#include <vector>
#include <limits>
#include <assert.h>

bool issame(pair<float, float> p1, pair<float, float> p2) {
    for (int i = 0; i < 2; ++i) {
        if (p1.first != p2.first || p1.second != p2.second)
            return false;
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest_pair;
    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[j] - numbers[i]);
            if (diff < min_diff && !make_pair(numbers[i], numbers[j]) == closest_pair) {
                min_diff = diff;
                closest_pair = make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return vector<pair<float, float>>({closest_pair});
}

int mainTest() {
    vector<float> numbers = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    vector<pair<float, float>> result = find_closest_elements(numbers);
    for (const auto& pair : result) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
    return 0;
}