```cpp
#include <iostream>
#include <string>

std::string intToMiniRoman(int num) {
    std::string roman;
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string symbols = "MDCCXVIL";
    int i = 0;
    
    while (num > 0) {
        if (num >= values[i]) {
            num -= values[i];
            roman += symbols.substr(i, 1);
        } else {
            i++;
        }
    }
    
    return roman;
}

int mainTest() {
    std::cout << intToMiniRoman(1000) << std::endl;
    return 0;
}