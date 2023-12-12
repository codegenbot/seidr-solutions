```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string int_to_mini_roman(int number) {
    vector<string> romanNumerals = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    string result;
    while (number > 0) {
        int digit = number % 10;
        if (digit < 4) {
            for (int i = 0; i < digit; i++) {
                result += romanNumerals[i];
            }
        } else if (digit == 4) {
            result += "iv";
        } else if (digit == 9) {
            result += "ix";
        } else {
            for (int i = digit - 5; i > 0; i--) {
                result += romanNumerals[i];
            }
            result += "v";
        }
        number /= 10;
    }
    return result;
}
```