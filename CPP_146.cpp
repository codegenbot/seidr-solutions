#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int count;
    
    std::cout << "Enter numbers (enter 'q' to finish): ";
    while (true) {
        char input;
        std::cin >> input;
        if (input == 'q') break;
        
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    count = specialFilter(nums);
    std::cout << "Number of special numbers: " << count << std::endl;
    
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