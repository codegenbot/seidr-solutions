#include <iostream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman = {
        {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
        {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
        {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
    };
    string result;
    for (auto &val : roman) {
        while (number >= val.first) {
            result += val.second;
            number -= val.first;
        }
    }
    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");
    assert(int_to_mini_roman(1990) == "mcmxc");
    assert(int_to_mini_roman(1666) == "mdclxvi");
    assert(int_to_mini_roman(4) == "iv");
    assert(int_to_mini_roman(44) == "xliv");
    cout << "All test cases pass." << endl;
    return 0;
}