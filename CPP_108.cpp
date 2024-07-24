#include <vector>
#include <iostream>

int count_nums(std::vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num > 0) {
            int sum_of_digits = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num % 10);
                if (!negative && digit > 5) {
                    sum_of_digits += digit - 9;
                } else {
                    sum_of_digits += digit;
                }
                num /= 10;
                if (num < 0) {
                    negative = true;
                }
            }
            if (sum_of_digits > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cout << "Enter element "<< (i+1) << ": ";
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    int result = count_nums(nums);
    std::cout << "Result: " << result << std::endl;
    return 0;
}