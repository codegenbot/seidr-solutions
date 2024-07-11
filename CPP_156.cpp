```cpp
#include <string>
#include <vector>
#include <stdexcept>

std::string int_to_mini_roman(int number) {
    if (number < 1 || number > 3999)
        throw std::runtime_error("Invalid Roman numeral conversion");

    std::vector<std::pair<int, char>> roman_numerals = {{1000, 'M'}, {900, 'CM'},
                                                          {500, 'D'}, {400, 'CD'},
                                                          {100, 'C'}, {90, 'XC'},
                                                          {50, 'L'}, {40, 'XL'},
                                                          {10, 'X'}, {9, 'IX'},
                                                          {5, 'V'}, {4, 'IV'}, {1, 'I'}};

    std::string result;
    for (const auto &roman : roman_numerals) {
        while (number >= roman.first) {
            number -= roman.first;
            result += roman.second;
        }
    }

    return result;
}