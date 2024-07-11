#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    // your comparison logic here
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    if (numbers.size() <= 1)
        return {};

    float min_diff = std::numeric_limits<float>::max();
    vector<pair<float, float>> closest_pairs;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (std::abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = std::abs(numbers[i] - numbers[j]);
                closest_pairs.push_back({numbers[i], numbers[j]});
            }
        }
    }

    return closest_pairs;
}