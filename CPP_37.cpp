#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<float> sort_even(const std::vector<float>& nums) {
    std::vector<float> even_nums;
    for (float num : nums) {
        if (static_cast<int>(num) % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    std::vector<float> sorted_even_nums = even_nums; // Make a copy before sorting
    std::sort(sorted_even_nums.begin(), sorted_even_nums.end());
    return sorted_even_nums;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 4, 2, 12, -10}));
    return 0;
}