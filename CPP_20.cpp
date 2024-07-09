```cpp
#include <algorithm>
#include <vector>
#include <limits>
#include <utility>

bool issame(vector<vector<float>> a, vector<vector<float>> b) {
    return a == b;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest = std::pair<float, float>(numbers[i], numbers[j]);
            }
        }
    }
    
    return {closest};
}