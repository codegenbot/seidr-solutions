#include <iostream>
using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
                                         {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
                                         {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string result = "";
    for (const auto& rom : roman) {
        while (number >= rom.first) {
            number -= rom.first;
            result += rom.second;
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "The Roman numeral is: " << int_to_mini_roman(n);
    return 0;
}