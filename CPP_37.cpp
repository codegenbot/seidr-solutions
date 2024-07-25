#include <algorithm>
#include <vector>
#include <assert.h>

std::vector<float> sort_even(const std::vector<float>& nums) {
    std::vector<float> even_nums;
    for (const auto& num : nums) {
        if (static_cast<int>(num) % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    std::sort(even_nums.begin(), even_nums.end());
    return even_nums;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert (issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 4, 2, 12, -10}));
    
    return 0;
}