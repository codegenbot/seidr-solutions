```cpp
#include <iostream>
#include <vector>

int specialFilter(const std::vector<std::string>& v) {
    int count = 0;
    for (const auto& str : v) {
        if (std::stoi(str) % 2 == 1) {
            count++;
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
        if(num.length() > 1000000){ 
            std::cout << "String too long. Please enter a shorter one." << std::endl;
            continue; 
        }
        int n = std::stoi(num);
        nums.push_back(std::to_string(n)); 
    }
    std::cout << "Number of special numbers: " << specialFilter(nums) << std::endl;
}