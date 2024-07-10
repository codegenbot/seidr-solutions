```cpp
#include <iostream>
#include <vector>

int specialFilter(const std::vector<std::string>&);

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

int main() {
    userInput();
}