```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int temp;
        while (!(std::cin >> temp) || temp > INT_MAX) {
            std::cerr << "Invalid input! Please enter a number within the range of an integer.\n";
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
        }
        nums.push_back(temp);
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