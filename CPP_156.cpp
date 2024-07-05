#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman = {
        {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
        {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
        {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
    };
    string result;
    for (const auto& [value, numeral] : roman) {
        while (number >= value) {
            result += numeral;
            number -= value;
        }
    }
    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");
    // Add more test cases if needed
    return 0;
}