#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num % 10) % 2 != 0 || (num / 10) % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums;
    int num;
    
    std::cout << "Enter numbers (enter -1 to stop):" << std::endl;
    
    while ((std::cin >> num) && (num != -1)) {
        nums.push_back(num);
    }
    
    if (!nums.empty()) {
        std::cout << "Count of special numbers: " << specialFilter(nums) << std::endl;
    } else {
        std::cout << "No numbers entered." << std::endl;
    }
    
    return 0;
}