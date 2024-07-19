#include <algorithm>
#include <limits>
#include <vector>

namespace std {
    vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
        pair<float, float> closest;
        float min_diff = numeric_limits<float>::max();

        for (int i = 0; i < numbers.size() - 1; ++i) {
            for (int j = i + 1; j < numbers.size(); ++j) {
                float diff = abs(numbers[i] - numbers[j]);
                if (diff < min_diff) {
                    min_diff = diff;
                    closest.first = min(numbers[i], numbers[j]);
                    closest.second = max(numbers[i], numbers[j]);
                }
            }
        }

        return {closest};
    }
}