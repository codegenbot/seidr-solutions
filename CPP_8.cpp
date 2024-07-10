#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
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

int main() {
    std::vector<int> nums = {2, 5, 3};
    std::vector<int> result = sum_product(nums);

    assert(issame(result, {10, 30}));

    std::cout << "Sum: " << result[0] << std::endl;
    std::cout << "Product: " << result[1] << std::endl;

    return 0;
}