#include <iostream>
#include <vector>
#include <cassert>

namespace my_namespace {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }

    std::vector<int> sum_product(std::vector<int> nums) {
        int sum = 0;
        int product = 1;

        for(int num : nums) {
            sum += num;
            product *= num;
        }

        return std::vector<int>{sum, product};
    }
}

int main() {
    assert(my_namespace::issame(my_namespace::sum_product({10}), {10, 10}));
    return 0;
}