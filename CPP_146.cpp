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
    
    while(true) {
        std::cin >> num;
        
        if(num == -1)
            break;
            
        nums.push_back(num);
    }
    
    std::cout << "Special filter count: " << specialFilter(nums) << std::endl;
    
    return 0;
}