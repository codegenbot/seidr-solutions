```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string int_to_mini_roman(int number) {
    vector<string> roman = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    string result;
    while (number > 0) {
        int digit = number % 10;
        if (digit < 4) {
            for (int i = 0; i < digit; i++) {
                result += roman[digit];
            }
        } else if (digit == 4) {
            result += roman[digit - 1] + "c";
        } else if (digit == 9) {
            result += "cm" + roman[digit - 10];
        } else {
            result += roman[digit / 5 * 2] + roman[digit % 5];
        }
        number /= 10;
    }
    return result;
}

int main() {
    int number = 499;
    string mini_roman = int_to_mini_roman(number);
    assert(mini_roman == "CDXCIX");
    cout << mini_roman << endl;
    return 0;
}
```