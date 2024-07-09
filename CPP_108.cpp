```cpp
#include <iostream>
#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 0) {
            count++;
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
        std::cout << "Enter element " << (i+1) << ": ";
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    int result = count_nums(nums);
    std::cout << "The number of elements with odd sum of digits is: " << result << std::endl;
    return 0;
}