#include <map>

using namespace std;

string int_to_mini_roman(int num) {
    map<int, string> roman = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
                                {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
                                {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};

    string roman_num = "";

    for (auto& pair : roman) {
        while (num >= pair.first) {
            roman_num += pair.second;
            num -= pair.first;
        }
        if (num > 0) {
            roman_num += "i";
            num--;
        }
    }

    return roman_num;
}