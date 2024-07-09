```cpp
#include <algorithm>
#include <vector>
#include <limits>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return std::vector<float>{closest_pair.first, closest_pair.second};
}