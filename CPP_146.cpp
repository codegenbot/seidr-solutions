```cpp
#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int num;

    // Read input from user
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;
        if (num == -1)
            break;
        nums.push_back(num);
    }

    // Call the specialFilter function with the input vector
    int result = specialFilter(nums);

    // Print the output
    std::cout << "The number of filtered numbers is: " << result << std::endl;

    return 0;
}