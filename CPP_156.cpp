#include <vector>
#include <string>

using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman_map = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                            {400, "CD"}, {100, "C"}, {90, "XC"},
                                            {50, "L"}, {40, "XL"}, {10, "X"},
                                            {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string roman = "";
    for (const auto& pair : roman_map) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }

    return roman;
}

int main() {
    int num;
    cout << "Enter an integer between 1 and 3999: ";
    cin >> num;

    if(num < 1 || num > 3999) {
        cout << "Invalid number. Please enter a number between 1 and 3999." << endl;
        return -1;
    }

    cout << "The Roman numeral for " << num << " is " << int_to_mini_roman(num) << "." << endl;

    return 0;
}