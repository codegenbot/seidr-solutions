#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct pair {
    int first;
    string second;
};

string romanMapToRoman(int number) {
    vector<pair> numeralMap = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                {400, "CD"}, {100, "C"}, {90, "XC"},
                                {50, "L"}, {40, "XL"}, {10, "X"},
                                {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    string roman = "";
    for (const auto& pair : numeralMap) {
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
    cout << "The Roman numeral for " << num << " is " << romanMapToRoman(num) << endl;
    return 0;
}