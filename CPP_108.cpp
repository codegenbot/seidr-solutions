#include <iostream>
#include <vector>

int count_nums(std::vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        bool isNegative = false;

        while (num != 0) {
            int digit = num % 10;
            sum += std::abs(digit);
            num /= 10;

            if (digit < 0) {
                isNegative = true;
            }
        }

        if (sum > 0 || isNegative) {
            count++;
        }
    }

    return count;
}

int main() {
    std::vector<int> nums1{};
    std::vector<int> nums2{-1, 11, -11};
    std::vector<int> nums3{1, 1, 2};

    std::cout << count_nums(nums1) << std::endl;  // Output: 0
    std::cout << count_nums(nums2) << std::endl;  // Output: 1
    std::cout << count_nums(nums3) << std::endl;  // Output: 3

    return 0;
}