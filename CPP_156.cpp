#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman_map = {
        {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
        {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
        {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
    };

    string result = "";
    for (const auto& pair : roman_map) {
        while (number >= pair.first) {
            result += pair.second;
            number -= pair.first;
        }
    }

    return result;
}

int main() {
    assert(int_to_mini_roman(1) == "i");
    assert(int_to_mini_roman(4) == "iv");
    assert(int_to_mini_roman(9) == "ix");
    assert(int_to_mini_roman(27) == "xxvii");
    assert(int_to_mini_roman(48) == "xlviii");
    assert(int_to_mini_roman(900) == "cm");
    assert(int_to_mini_roman(999) == "cmxcix");
    assert(int_to_mini_roman(1000) == "m");

    return 0;
}