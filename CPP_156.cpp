#include <string>
#include <vector>
using namespace std;

string int_to_mini_romank(int number){
    vector<pair<int, string>> roman_map = {
        {1, "i"}, {4, "iv"}, {5, "v"}, {9, "ix"},
        {10, "x"}, {40, "xl"}, {50, "l"}, {90, "xc"},
        {100, "c"}, {400, "cd"}, {500, "d"}, {900, "cm"}, {1000, "m"}
    };

    string result = "";
    for (auto it = roman_map.rbegin(); it != roman_map.rend(); ++it) {
        while (number >= it->first) {
            result += it->second;
            number -= it->first;
        }
    }

    return result;
}