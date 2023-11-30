#include <iostream>
#include <string>

std::string int_to_mini_roman(int number) {
    std::string result = "";

    // Define the roman numerals and their corresponding values
    std::vector<std::pair<int, std::string>> romanNumerals = {
        {1000, "m"},
        {900, "cm"},
        {500, "d"},
        {400, "cd"},
        {100, "c"},
        {90, "xc"},
        {50, "l"},
        {40, "xl"},
        {10, "x"},
        {9, "ix"},
        {5, "v"},
        {4, "iv"},
        {1, "i"}
    };

    // Iterate through the roman numerals and subtract their value from the number
    for (const auto& numeral : romanNumerals) {
        while (number >= numeral.first) {
            result += numeral.second;
            number -= numeral.first;
        }
    }

    return result;
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    std::string romanNumeral = int_to_mini_roman(num);
    std::cout << "Roman numeral equivalent: " << romanNumeral << std::endl;

    return 0;
}