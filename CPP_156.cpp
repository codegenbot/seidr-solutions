```cpp
#include <string>

std::string int_to_mini_roman(int n);

int main() {
    std::string roman = int_to_mini_roman(1000);
    // ...
}

std::string int_to_mini_roman(int n) {
    if (n <= 0)
        return "";
    
    static const char* Roman[15] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    static int Val[15] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    std::string res;
    for (int i = 0; i < 13; ++i)
        while (n >= Val[i]) {
            n -= Val[i];
            res += Roman[i];
        }
    
    return res;
}