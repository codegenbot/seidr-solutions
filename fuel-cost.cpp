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

    int result = 0;
    for (int num : nums) {
        result += (num / 3) - 2;
    }
    std::cout << result << std::endl;

    return 0;
}