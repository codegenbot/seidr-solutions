```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, string>> roman_map = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    cout << int_to_mini_roman(1000) << endl;  // Output: M
    return 0;
}

string int_to_mini_roman(int num) {
    string roman = "";
    
    for (const auto& pair : roman_map) {
        while (num >= pair.first) {
            num -= pair.first;
            roman += pair.second;
        }
    }
    
    return roman;
}