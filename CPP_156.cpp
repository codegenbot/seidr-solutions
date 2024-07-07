#include <map>
using namespace std;

string int_to_mini_roman(int number) {
    map<int, string> roman = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
                               {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
                               {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};

    string roman_numeral = "";
    for (auto& pair : roman) {
        while (number >= pair.first) {
            roman_numeral += pair.second;
            number -= pair.first;
        }
        if (number > 0) {
            roman_numeral += "i";
            number--;
        }
    }
    return roman_numeral;
}