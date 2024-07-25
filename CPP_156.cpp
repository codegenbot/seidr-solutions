```cpp
#include <vector>
#include <string>

using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                         {400, "CD"}, {100, "C"}, {90, "XC"},
                                         {50, "L"}, {40, "XL"}, {10, "X"},
                                         {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string roman_num = "";
    for (const auto& p : roman) {
        while (number >= p.first) {
            number -= p.first;
            roman_num += p.second;
        }
    }

    return roman_num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The mini Roman numeral is: " << int_to_mini_roman(num) << endl;
    return 0;
}