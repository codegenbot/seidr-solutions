```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct pair {
    int first;
    string second;
};

vector<pair> roman = {{1000, "M"}, {900, "CM"}, {500, "D"},
                        {400, "CD"}, {100, "C"}, {90, "XC"},
                        {50, "L"}, {40, "XL"}, {10, "X"},
                        {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

string int_to_mini_roman(int number) {
    string result = "";
    for (const auto &romanNumber : roman) {
        while (number >= romanNumber.first) {
            number -= romanNumber.first;
            result += romanNumber.second;
        }
    }
    if(number > 0)
        result.append(to_string(number)); 
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Mini Roman representation of the number is: " << int_to_mini_roman(num) << endl;
    return 0;
}