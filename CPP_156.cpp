```cpp
#include <iostream>
#include <cassert>
#include <string>

std::string intToMiniRoman(int n) {
    std::string roman;
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char syb[] = {'M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I'};
    int i = 0;
    while (n > 0) {
        if (n >= val[i]) {
            n -= val[i];
            roman += syb[i];
        } else {
            i++;
        }
    }
    return roman;
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << intToMiniRoman(n) << std::endl;
    return 0;
}