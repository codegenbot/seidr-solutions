```cpp
#include <iostream>
#include <vector>
#include <limits>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            if(std::abs(num) < std::numeric_limits<int>::max() / 9) {
                int absNum = std::abs(num);
                sum = 0;
                while (absNum > 0) {
                    sum += absNum % 10;
                    absNum /= 10;
                }
                if (sum > 0) {
                    count++;
                }
            } else {
                break; 
            }
        }
    }
    return count;

}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums;
    for (int i = 0; i < n; i++) {
        if (!(std::cin >> nums[i])) break;
    }
    if (!std::cin) { // If there was an input failure, display error message and exit.
        std::cerr << "Error: Invalid input. Please try again.\n";
        return -1;
    }
    if (!nums.empty()) {  
        std::cout << "Count of positive sums is: " << count_nums(nums) << std::endl;
    }
    return 0;

}