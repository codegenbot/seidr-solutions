#include <iostream>
#include <string>

std::string intToMiniRoman(int num) {
    std::string roman;
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char symbols[] = {'M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I'};
    int i = 0;
    
    while (num > 0) {
        if (num >= values[i]) {
            num -= values[i];
            roman += symbols[i];
        } else {
            i++;
        }
    }
    
    return roman;
}

int main() {
    std::cout << intToMiniRoman(1000) << std::endl;
    return 0;
}