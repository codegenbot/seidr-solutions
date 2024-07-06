#include <string>

std::string int_to_mini_roman(int number) {
    std::string miniRoman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    std::string result;
    
    for (int i = 0; i < sizeof(values)/sizeof(int); i++) {
        while (number >= values[i]) {
            number -= values[i];
            result += miniRoman[i];
        }
    }
    
    return result;
}