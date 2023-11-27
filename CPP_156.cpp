#include <iostream>

string int_to_mini_romank(int number) {
    vector<string> symbol = {
        "M",
        "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV",
        "I"
    };
    
    vector<int> value = {
        1000,
        900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1
    };
    
    string romanNumeral;
    for (int i = 0; i < value.size(); i++) {
        while (number >= value[i]) {
            number -= value[i];
            romanNumeral += symbol[i];
        }
    }

    return romanNumeral;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    string romanNumeral = int_to_mini_romank(num);
    cout << "Roman numeral equivalent: " << romanNumeral << endl;
    
    return 0;
}