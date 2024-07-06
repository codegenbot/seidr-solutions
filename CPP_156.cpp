```cpp
#include <iostream>
#include <vector>
#include <utility>  
using namespace std;

string int_to_mini_roman(int num) {
    vector<pair<int, string>> roman_map = {std::make_pair(1000, "M"), std::make_pair(900, "CM"), std::make_pair(500, "D"),
                                            std::make_pair(400, "CD"), std::make_pair(100, "C"), std::make_pair(90, "XC"),
                                            std::make_pair(50, "L"), std::make_pair(40, "XL"), std::make_pair(10, "X"),
                                            std::make_pair(9, "IX"), std::make_pair(5, "V"), std::make_pair(4, "IV"), std::make_pair(1, "I")};
    string roman = "";
    
    for (const auto& pair : roman_map) {
        while (num >= pair.first) {
            num -= pair.first;
            roman += pair.second;
        }
    }
    
    return roman;
}

int main() {
    cout << int_to_mini_roman(1000) << endl;
    return 0;
}