#include <cassert>
#include <string>
#include <ostream>

std::string int_to_roman(int number) {
    std::string roman = "";
    while (number >= 1000) {
        number -= 1000;
        roman += "M";
    }
    if (number >= 900) {
        number -= 900;
        roman += "CM";
    } else if (number >= 500) {
        number -= 500;
        roman += "D";
    } else if (number >= 400) {
        number -= 400;
        roman += "CD";
    } else if (number >= 100) {
        while (number >= 100) {
            number -= 100;
            roman += "C";
        }
    } else if (number >= 90) {
        number -= 90;
        roman += "XC";
    } else if (number >= 50) {
        number -= 50;
        roman += "L";
    } else if (number >= 40) {
        number -= 40;
        roman += "XL";
    } else if (number >= 10) {
        while (number >= 10) {
            number -= 10;
            roman += "X";
        }
    } else if (number >= 9) {
        number -= 9;
        roman += "IX";
    } else if (number >= 5) {
        number -= 5;
        roman += "V";
    } else if (number >= 4) {
        number -= 4;
        roman += "IV";
    } else {
        number -= 1;
        roman += "I";
    }
    return roman;
}

int main() {
    assert(int_to_roman(1000) == "M");
    std::cout << int_to_roman(2022) << std::endl;
    return 0;
}