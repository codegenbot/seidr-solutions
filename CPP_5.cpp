#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> intersperse(const std::vector<int>& nums, int value) {
    std::vector<int> result;
    for (size_t i = 0; i < nums.size(); ++i) {
        result.push_back(nums[i]);
        if (i < nums.size() - 1) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}