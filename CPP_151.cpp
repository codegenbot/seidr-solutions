#include <vector>
#include <cmath>
#include <cassert>

std::vector<int> lst = {1, 3, 5, 2, 4};

long long double_the_difference(std::vector<int> nums){
    long long odd_sum = 0;
    for (int num : nums) {
        if (num > 0 && num % 2 != 0) {
            odd_sum += static_cast<long long>(pow(num, 2));
        }
    }
    return odd_sum * 2;
}

int main(){
    long long expected_result = 2 * ((1 * 1) + (3 * 3) + (5 * 5)); // Calculate expected result
    assert(double_the_difference(lst) == expected_result);
    
    return 0;
}