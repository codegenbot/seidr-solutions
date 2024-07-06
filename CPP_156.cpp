```cpp
#include <string>

std::string int_to_mini_roman(int number) {
    const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    std::string result;
    for (int i = 0; number > 0; i++) {
        while (number >= value[i]) {
            number -= value[i];
            result += roman[i];
        }
    }
    
    return result;
}