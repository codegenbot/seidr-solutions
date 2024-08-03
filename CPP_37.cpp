#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(std::vector<float> nums) {
    std::vector<float> result;
    for (const auto& num : nums) {
        if (static_cast<int>(num) % 2 == 0) {
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}