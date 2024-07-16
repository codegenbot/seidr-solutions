#include <iostream>
#include <string>
#include <vector>

int luhn(std::vector<std::string> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2) == 1) {
            int temp = std::stoi(digits[i]) * 2;
            if (temp > 9)
                temp -= 9;
            sum += temp;
        } else
            sum += std::stoi(digits[i]);
    }
    return sum;
}

int main() {
    std::vector<std::string> digits = {"4", "3", "2", "1", "8", "7", "6", "5", "4", "3", "2", "1", "8", "7", "6", "5"};
    std::cout << luhn(digits) << std::endl;
    return 0;
}