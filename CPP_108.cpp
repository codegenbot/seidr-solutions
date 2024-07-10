#include <iostream>
#include <vector>
#include <cassert>

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
            num = -num; 
            int sum = 0;
            bool is_negative = true;
            while (num > 0) {
                if (is_negative) {
                    if (num % 10 < 0) {
                        sum += num % 10;
                        is_negative = false;
                    } else {
                        break;
                    }
                } else {
                    sum += num % 10;
                }
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
    assert(count_nums({1}) == 1);
    std::cout << "Enter the numbers separated by space: ";
    int n;
    std::cin >> n;
    std::vector<int> nums;
    while (n--) {
        int num; 
        std::cin >> num;
        nums.push_back(num);
    }
    std::cout << "Count of positive sums is: " << count_nums(nums) << std::endl;
    return 0;
}