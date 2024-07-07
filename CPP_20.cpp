```cpp
#include <algorithm>
#include <numeric>
#include <cmath>
#include <limits>
#include <array>

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
    std::array<float, 2> pair; 
    float minDiff = std::numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            pair[0] = numbers[i];
            pair[1] = numbers[i + 1];
        }
    }
    
    return std::vector<float>(pair.begin(), pair.end());
}