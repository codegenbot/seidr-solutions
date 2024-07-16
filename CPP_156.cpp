#include <vector>
#include <string>
using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> romans = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                         {400, "CD"}, {100, "C"}, {90, "XC"},
                                         {50, "L"}, {40, "XL"}, {10, "X"},
                                         {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string roman = "";
    for (const auto& roman_num : romans) {
        while (number >= roman_num.first) {
            number -= roman_num.first;
            roman += roman_num.second;
        }
    }

    return roman;
}