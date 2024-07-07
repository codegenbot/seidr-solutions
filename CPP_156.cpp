```cpp
#include <iostream>
#include <vector>
#include <string>

std::string int_to_mini_roman(int number) {
    std::string roman = "";
    std::vector<std::pair<int, std::string>> romans = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                                         {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                                         {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    for (auto r : romans) {
        while (number >= r.first) {
            roman += r.second;
            number -= r.first;
        }
    }

    return roman;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "The Roman numeral is: " << int_to_mini_roman(num) << std::endl;
    return 0;
}