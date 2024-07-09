#include <string>
#include <vector>
#include <stdexcept>

string int_to_mini_roman(int number) {
    vector<pair<int, string>> romanNumerals = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    string roman = "";
    
    for (const auto& numeral : romanNumerals) {
        while (number >= numeral.first) {
            number -= numeral.first;
            roman += numeral.second;
        }
    }
    
    if(number != 0) throw runtime_error("Input is not valid Roman numerals");
    return roman;
}

assert(int_to_mini_roman(1000) == "M");