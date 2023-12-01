#include <string>
#include <vector>
#include <iostream>

std::string int_to_mini_roman(int number) {
    std::string roman;
    std::vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    for (std::size_t i = 0; i < values.size(); i++) {
        while (number >= values[i]) {
            roman += symbols[i];
            number -= values[i];
        }
    }

    return roman;
}

int main() {
    int number;
    std::cin >> number;
    std::string result = int_to_mini_roman(number);
    std::cout << result;

    return 0;
}