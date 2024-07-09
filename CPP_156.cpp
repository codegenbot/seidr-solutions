```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;
vector<pair<int, string>> romanMap;

pair<int, string> romanMap[] = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                 {400, "CD"}, {100, "C"}, {90, "XC"},
                                 {50, "L"}, {40, "XL"}, {10, "X"},
                                 {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

string int_to_roman(int number) {
    string roman = ""; // Initialize the string
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}

int main() {
    for(int i = 1; i <= 3999; i++) { 
        cout << i << ": " << int_to_roman(i) << endl;
    }
    assert(int_to_roman(1000) == "M");
    return 0;
}