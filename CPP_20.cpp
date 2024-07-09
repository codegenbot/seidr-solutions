```
#include <algorithm>
#include <numeric>
#include <limits>

bool issame(float a, float b) {
    if (std::abs(a - b) < std::numeric_limits<float>::epsilon())
        return true;
    else
        return false;
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff || issame(numbers[i], numbers[i+1])) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }

    return vector<float>(closest_pair.begin(), closest_pair.end());
}