#include <string>
#include <vector>

std::string int_to_mini_roman(int number){
    std::vector<std::string> roman = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    std::vector<int> values = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    std::string result = "";
    int i = 12;
    while(number > 0){
        int div = number / values[i];
        number %= values[i];
        while(div--){
            result += roman[i];
        }
        i--;
    }
    return result;
}