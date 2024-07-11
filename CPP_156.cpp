#include <vector>
#include <string>

using namespace std;

string int_to_mini_roman(int number) {
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
    int num;
    cout << "Enter a number between 1 and 3999: ";
    cin >> num;
    if(num > 0 && num <= 3999)
        cout << "The mini Roman representation of the given number is: " << int_to_mini_roman(num) << endl;
    else
        cout << "Please enter a number within the range [1, 3999]." << endl;
    return 0;
}