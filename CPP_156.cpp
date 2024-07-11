```cpp
#include <iostream>
#include <string>
using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> romanMap = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                            {400, "CD"}, {100, "C"}, {90, "XC"},
                                            {50, "L"}, {40, "XL"}, {10, "X"},
                                            {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    string roman = "";
    for (auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    cout << int_to_mini_roman(4) << endl;
    return 0;
}