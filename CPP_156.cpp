#include <string>
#include <vector>
using namespace std;

string int_to_mini_romank(int number) {
    vector<pair<int, string>> roman_numerals = {
        {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
        {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
        {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
    };

    string result = "";
    for (const auto& pair : roman_numerals) {
        while (number >= pair.first) {
            result += pair.second;
            number -= pair.first;
        }
    }

    for (char& c : result) {
        if (c >= 'A' && c <= 'Z') {
            c += 32; // Convert uppercase to lowercase
        }
    }

    return result;
}