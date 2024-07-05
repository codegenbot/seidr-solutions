#include <string>
#include <vector>
#include <utility>
#include <cassert>

using namespace std;

string int_to_mini_roman(int number){
    vector<pair<int, string>> roman = {
        {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
        {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
        {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
    };
    string result;
    for (const auto& kv : roman) {
        while (number >= kv.first) {
            result += kv.second;
            number -= kv.first;
        }
    }
    return result;
}

// Additional test for validation
int main() {
    assert(int_to_mini_roman(1) == "i");
    assert(int_to_mini_roman(4) == "iv");
    assert(int_to_mini_roman(9) == "ix");
    assert(int_to_mini_roman(58) == "lviii");
    assert(int_to_mini_roman(1994) == "mcmxciv");
    return 0;
}