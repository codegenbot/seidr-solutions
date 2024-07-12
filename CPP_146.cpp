#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int count = 0;

    std::cout << "Enter numbers (type 'stop' to finish): ";
    while (true) {
        std::string input;
        std::cin >> input;
        if (input == "stop") break;
        nums.push_back(std::stoi(input));
    }

    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }

    std::cout << "Count: " << count << std::endl;
    return 0;
}