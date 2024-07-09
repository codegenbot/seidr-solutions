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

int mainFunc() {
    std::vector<int> nums;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        nums.push_back(num);
    }
    
    int output = specialFilter(nums);
    std::cout << "Special filter count: " << output << std::endl;
    
    return 0;
}