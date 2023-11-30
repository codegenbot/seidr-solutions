#include <iostream>
#include <vector>
#include <string>
using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman_numerals = {
        {1000, "m"},
        {900, "cm"},
        {500, "d"},
        {400, "cd"},
        {100, "c"},
        {90, "xc"},
        {50, "l"},
        {40, "xl"},
        {10, "x"},
        {9, "ix"},
        {5, "v"},
        {4, "iv"},
        {1, "i"}
    };

    string result = "";
    for (auto roman : roman_numerals) {
        while (number >= roman.first) {
            result += roman.second;
            number -= roman.first;
        }
    }
    
    return result;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    string roman_numeral = int_to_mini_roman(num);
    cout << "Roman Numeral: " << roman_numeral << endl;
    
    return 0;
}