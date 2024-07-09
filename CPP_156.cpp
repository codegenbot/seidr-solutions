#include <bits/stdc++.h>

using namespace std;

string int_to_roman(int number) {
    vector<pair<int, string>> romanNumerals = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string result = "";

    for (const auto &roman : romanNumerals) {
        while (number >= roman.first) {
            number -= roman.first;
            result += roman.second;
        }
    }

    return result;
}

int main() {
    int num;
    cout << "Enter a number between 1 and 3999: ";
    cin >> num;
    if (num < 1 || num > 3999) {
        cout << "Number out of range. Please enter a number between 1 and 3999.";
    } else {
        cout << "The Roman numeral for the entered number is: " << int_to_roman(num);
    }
    return 0;
}