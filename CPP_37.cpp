#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sort_even(const std::vector<float>& nums) {
    std::vector<float> even_nums = nums;
    std::sort(even_nums.begin(), even_nums.end(), [](float a, float b) {
        return ((int)a % 2 == 0) && ((int)b % 2 == 0) ? a < b : (int)a % 2 < (int)b % 2;
    });
    return even_nums;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}