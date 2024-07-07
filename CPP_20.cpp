#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() <= 1) {
        throw runtime_error("Vector should have at least two elements");
    }

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair.first = numbers[i];
                closest_pair.second = numbers[j];
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}