```
#include <iostream>
#include <vector>

std::string int_to_mini_roman(int number) {
    const std::vector<std::string> roman = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    std::string result;
    while (number > 0) {
        int digit = number % 10;
        if (digit < 4) {
            for (int i = 0; i < digit; i++) {
                result += roman[number];
            }
        } else if (digit == 4) {
            result += "iv";
        } else if (digit == 5) {
            result += "v";
        } else if (digit == 6) {
            result += "vi";
        } else if (digit == 7) {
            result += "vii";
        } else if (digit == 8) {
            result += "viii";
        } else if (digit == 9) {
            result += "ix";
        }
        number /= 10;
    }
    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");
    return 0;
}
```