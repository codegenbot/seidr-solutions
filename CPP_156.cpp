#include <iostream>
using namespace std;

string int_to_mini_roman(int number) {
    string roman = "";
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string symbols[] = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    for (int i = 0; i < 13; i++) {
        while (number >= values[i]) {
            roman += symbols[i];
            number -= values[i];
        }
    }

    return roman;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Roman numeral equivalent: " << int_to_mini_roman(num) << endl;

    return 0;
}