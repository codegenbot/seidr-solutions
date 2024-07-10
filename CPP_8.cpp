#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> sum_product(const std::vector<int>& nums){
    std::vector<int> result;
    if (nums.size() == 1) {
        int product = nums[0] * nums[0];
        result.push_back(product);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}