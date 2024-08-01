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
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> nums.push_back;
    }
    
    int result = specialFilter(nums);
    std::cout << "The count of filtered numbers is: " << result << std::endl;
    
    return 0;
}