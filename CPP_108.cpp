#include <iostream>
#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = num % 10;
                if (digit < 0) {
                    digit = -digit;
                    negative = !negative;
                }
                sum += digit;
                num /= 10;
            }
            if (!negative && sum > 0 || negative && sum >= 1) {
                count++;
            }
        } else {
            int sum = 0;
            bool negative = true;
            while (num != 0) {
                int digit = num % 10;
                if (digit < 0) {
                    digit = -digit;
                }
                sum += digit;
                num /= 10;
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
    
    for(int i=0; i<n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> nums[i];
    }
    
    int result = count_nums(nums);
    
    std::cout << "Number of positive integers with even number of digits: " << result << std::endl;
    
    return 0;
}