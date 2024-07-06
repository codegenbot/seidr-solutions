```cpp
#include <iostream>
#include <vector>
#include <limits>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && ((num / 10) % 10) % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    while (!(std::cin >> n) || n <= 0) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::vector<int> nums(n); 

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        while (!(std::cin >> nums[i])) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();
            std::cin.ignore(std::streamsize::max, '\n');
        }
    }

    int count = specialFilter(nums);

    std::cout << "Count: " << count << std::endl;
    return 0;
}