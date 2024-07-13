#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter numbers: ";
    std::vector<int> nums;
    while (std::cin >> n) {
        nums.push_back(n);
    }
    int count = count_nums(nums);
    std::cout << "Count of numbers with sum greater than 0 is: " << count << std::endl;
    return 0;
}

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int n = num;
            while (n > 0) {
                int digit = n % 10;
                sum += digit;
                n /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, i = 1;
            n = abs(num);
            while (n > 0) {
                int digit = n % 10;
                if (digit != 0 || i == 1) {
                    sum += (digit < 0 ? -1 : 1);
                }
                n /= 10;
                i++;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}