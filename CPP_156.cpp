#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"}, {100, "c"},
                                       {90, "xc"}, {50, "l"}, {40, "xl"}, {10, "x"}, {9, "ix"},
                                       {5, "v"}, {4, "iv"}, {1, "i"}};
    string result = "";
    for (auto &r : roman) {
        while (number >= r.first) {
            result += r.second;
            number -= r.first;
        }
    }
    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");
    assert(int_to_mini_roman(900) == "cm");
    assert(int_to_mini_roman(500) == "d");
    assert(int_to_mini_roman(400) == "cd");
    assert(int_to_mini_roman(100) == "c");
    assert(int_to_mini_roman(90) == "xc");
    assert(int_to_mini_roman(50) == "l");
    assert(int_to_mini_roman(40) == "xl");
    assert(int_to_mini_roman(10) == "x");
    assert(int_to_mini_roman(9) == "ix");
    assert(int_to_mini_roman(5) == "v");
    assert(int_to_mini_roman(4) == "iv");
    assert(int_to_mini_roman(1) == "i");
    cout << "All tests pass!" << endl;
    return 0;
}