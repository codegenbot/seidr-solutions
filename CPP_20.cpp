```cpp
#include <algorithm>
#include <numeric>
#include <cmath>
#include <limits>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float minDiff = std::numeric_limits<float>::max();
    std::pair<float, float> closestPair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestPair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return std::vector<float>(closestPair.begin(), closestPair.end());
}