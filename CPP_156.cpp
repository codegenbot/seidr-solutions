```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Roman {
    int value;
    string roman;
};

vector<Roman> romanMap;
romanMap.push_back({1000, "M"});
romanMap.push_back({900, "CM"});
romanMap.push_back({500, "D"});
romanMap.push_back({400, "CD"});
romanMap.push_back({100, "C"});
romanMap.push_back({90, "XC"});
romanMap.push_back({50, "L"});
romanMap.push_back({40, "XL"});
romanMap.push_back({10, "X"});
romanMap.push_back({9, "IX"});
romanMap.push_back({5, "V"});
romanMap.push_back({4, "IV"});
romanMap.push_back({1, "I"});

string intToRoman(int number) {
    string roman = "";
    
    for (const auto& pair : romanMap) {
        while (number >= pair.value) {
            number -= pair.value;
            roman += pair.roman;
        }
    }
    
    return roman;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The Roman numeral is: " << intToRoman(num) << endl;
}