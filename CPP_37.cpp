#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> result;
    for (const auto& num : l) {
        if (static_cast<int>(num) % 2 == 0) {
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}