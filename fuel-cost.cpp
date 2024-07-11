#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::vector<int> nums;
    std::string input;
    getline(std::cin, input);
    std::istringstream iss(input);
    int num;
    while (iss >> num) {
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (num / 3) - 2;
    }
    
    sum *= 3;
    
    std::cout << sum << std::endl;
    
    return 0;
}