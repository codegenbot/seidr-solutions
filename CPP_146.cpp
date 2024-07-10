```c++
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> nums(n); // Create vector with initial size 'n'
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int temp;
        std::cin >> temp;
        nums[i] = temp;
    }
    std::cout << "Number of special numbers: " << specialFilter(nums) << std::endl;
}

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;