#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    float min_diff = abs(numbers[1] - numbers[0]);

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = abs(numbers[j] - numbers[i]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair.first = numbers[i];
                closest_pair.second = numbers[j];
            }
        }
    }

    result.push_back(closest_pair);
    return result;
}