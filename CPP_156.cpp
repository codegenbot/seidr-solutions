```
#include <vector>
#include <string>

using namespace std;

string int_to_roman(int number) {
    vector<pair<int, string>> roman_numerals = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                                  {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                                  {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string roman = "";
    for (const auto& numeral : roman_numerals) {
        while (number >= numeral.first) {
            roman += numeral.second;
            number -= numeral.first;
        }
    }
    return roman;
}

int main() {
    int number;
    cin >> number; 
    cout << int_to_roman(number) << endl; 
    return 0;
}