#include <vector>
#include <cassert>
#include <cmath>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (std::abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5}; 
    int output = specialFilter(nums);
    std::cout << "The filtered number is: " << output << std::endl; 
    return 0;
}