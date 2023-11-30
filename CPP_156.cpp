#include <iostream>
#include <string>

std::string int_to_mini_roman(int number) {
    std::string romanNumeral = "";
    std::vector<int> numbers = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> romanSymbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (int i = 0; i < numbers.size(); i++) {
        while (number >= numbers[i]) {
            romanNumeral += romanSymbols[i];
            number -= numbers[i];
        }
    }

    return romanNumeral;
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;
    std::string romanNumeral = int_to_mini_roman(number);
    std::cout << "Roman Numeral: " << romanNumeral << std::endl;

    return 0;
}