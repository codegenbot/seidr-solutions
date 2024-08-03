#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main() {
    std::vector<int> nums;
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int n;

    while (ss >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += num / 3 - 2;
    }

    std::cout << sum << std::endl;

    return 0;
}