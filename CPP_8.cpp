#include <iostream>
#include <vector>
#include <cassert> // Include the <cassert> header

std::vector<int> sum_product(std::vector<int> nums){
    int sum = 0;
    int product = 1;

    for(int num : nums){
        sum += num;
        product *= num;
    }

    return {sum, product};
}

bool are_equal(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    std::vector<int> nums = {2, 5, 3};
    std::vector<int> result = sum_product(nums);

    assert(are_equal(result, {10, 30}));

    std::cout << "Sum: " << result[0] << std::endl;
    std::cout << "Product: " << result[1] << std::endl;

    return 0;
}