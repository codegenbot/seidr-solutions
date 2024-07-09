#include <algorithm>
#include <numeric>
#include <limits>

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair.first = min(numbers[i], numbers[j]);
                closest_pair.second = max(numbers[i], numbers[j]);
            }
        }
    }
    
    return vector<float>({closest_pair.first, closest_pair.second});
}