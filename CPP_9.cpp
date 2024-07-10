#include <vector>
#include <algorithm>
#include <cassert>

namespace cpp9 {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }

    std::vector<int> rolling_max(const std::vector<int>& nums) {
        std::vector<int> result(nums.size());
        std::adjacent_difference(nums.begin(), nums.end(), result.begin(), [](int a, int b) {
            return std::max(a, b);
        });
        return result;
    }
}

int main() {
    assert(cpp9::issame(cpp9::rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
}