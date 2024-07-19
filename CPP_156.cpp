#include <iostream>
#include <string>

std::string intToMiniRoman(int num) {
    std::string roman = "";
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::string sym = "MCCDLLXLIXIVI";
    int i = 0;
    while (num > 0) {
        if (num >= val[i]) {
            num -= val[i];
            roman += sym.substr(2*i, 3);
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