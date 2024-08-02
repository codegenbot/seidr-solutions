#include <vector>
#include <iostream>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (digit != 0 || !negative) {
                    sum += digit;
                }
                num /= 10;
                if (num < 0) {
                    negative = true;
                }
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> nums[i];
    }
    
    int result = count_nums(nums);
    std::cout << "Number of positive sums: " << result << std::endl;
    
    return 0;
}