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
    for(int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> num;
        nums.push_back(num);
    }
    int result = count_nums(nums);
    std::cout << "Number of numbers with sum greater than 0: " << result << std::endl;
    return 0;
}