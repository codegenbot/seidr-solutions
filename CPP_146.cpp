```cpp
#include <iostream>
#include <vector>

int main() {
    int count = 0;
    std::vector<int> nums;
    int num;
    
    // Input numbers from user
    std::cout << "Enter numbers (enter -1 to stop):" << std::endl;
    while ((std::cin >> num) && (num != -1)) {
        nums.push_back(num);
    }
    
    count = specialFilter(nums);
    
    // Print the result
    if (count > 0) {
        std::cout << "Number of special numbers: " << count << std::endl;
    } else {
        std::cout << "No special numbers found." << std::endl;
    }
    
    return 0;
}

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}