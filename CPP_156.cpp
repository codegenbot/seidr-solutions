#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct RomanPair {
    int first;
    string second;
};

string int_to_roman(int number) {
    vector<RomanPair> romanMap = {{1000, "M"}, {900, "CM"}, {500, "D"},
                              {400, "CD"}, {100, "C"}, {90, "XC"},
                              {50, "L"}, {40, "XL"}, {10, "X"},
                              {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    string roman = "";
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The Roman numeral for " << num << " is " << int_to_roman(num) << endl;
    return 0;
}