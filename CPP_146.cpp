```cpp
#include <iostream>
#include <vector>

int specialFilter(const std::vector<std::string>& nums) {
    int count = 0;
    for (const auto& num : nums) {
        if (std::stoi(num).length() % 2 != 0) {
            ++count;
        }
    }
    return count;
}

void userInput() {
    std::vector<std::string> nums;
    std::cout << "Enter the numbers (enter 'stop' to finish): ";
    std::string num;
    while (true) {
        getline(std::cin, num);
        if (num == "stop") break;
        int n;
        std::string temp = num;
        if(temp.length() > 1000000){ 
            std::cout << "String too long. Please enter a shorter one." << std::endl;
            continue; 
        }
        n = std::stoi(temp);
        if (temp.length() > 1000000) { 
            std::cout << "String too long. Please enter a shorter one." << std::endl;
            continue; 
        } else {
            nums.push_back(std::to_string(n)); 
        }
    }
    std::cout << "Number of special numbers: " << specialFilter(nums) << std::endl;
}