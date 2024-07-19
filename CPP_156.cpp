#include <unordered_map>

string int_to_mini_roman(int number) {
    unordered_map<int, string> roman_numerals = {{1, "i"}, {4, "iv"}, {5, "v"}, 
                                                    {9, "ix"}, {10, "x"}, {40, "xl"},
                                                    {50, "l"}, {90, "xc"}, {100, "c"},
                                                    {400, "cd"}, {500, "d"}, {900, "cm"}, {1000, "m"}};
    string roman = "";
    while (number > 0) {
        for (auto it = roman_numerals.rbegin(); it != roman_numerals.rend(); ++it) {
            if (number >= it->first) {
                number -= it->first;
                roman += it->second;
                break;
            }
        }
    }
    return roman;
}