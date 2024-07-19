```c
#include <cassert>
#include <string>

std::string intToMiniRoman(int num) {
    std::string roman;
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char sym[] = {'M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I'};
    int i = 0;
    while (num > 0) {
        if (num >= val[i]) {
            num -= val[i];
            roman += sym[i];
        } else {
            i++;
        }
    }
    return roman;
}

int testMain() {
    assert(intToMiniRoman(1000) == "M");
    return 0;
}