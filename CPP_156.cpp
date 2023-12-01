#include <iostream>

int main() {
    int number;
    std::cin >> number;

    std::string roman_number = int_to_mini_roman(number);

    std::cout << roman_number << std::endl;

    return 0;
}