```
#include <iostream>
#include <vector>

int specialFilter(const std::vector<std::string>&);

int main() {
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
        nums.push_back(std::to_string(n)); 
    }
    int count = specialFilter(nums);
    if(count > 0) {
        std::cout << "Number of special numbers: " << count << std::endl;
    } else {
        std::cout << "No special numbers found." << std::endl;
    }
}