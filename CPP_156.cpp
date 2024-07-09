#include <cassert>
#include <string>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

std::string int_to_roman(int n) {
    if (n >= 1000) {
        return std::string("M");
    }
    else if (n >= 900) {
        return "CM" + int_to_roman(n - 900);
    }
    else if (n >= 500) {
        return "D" + int_to_roman(n - 500);
    }
    else if (n >= 400) {
        return "CD" + int_to_roman(n - 400);
    }
    else if (n >= 100) {
        if (n >= 90) {
            return "CM";
        }
        else if (n >= 50) {
            return "L" + int_to_roman(n - 50);
        }
        else if (n >= 40) {
            return "XL" + int_to_roman(n - 40);
        }
        else {
            if (n >= 9) {
                return "IX";
            }
            else if (n >= 5) {
                return "V" + int_to_roman(n - 5);
            }
            else if (n >= 4) {
                return "IV" + int_to_roman(n - 4);
            }
            else {
                return roman[n];
            }
        }
    }
    else {
        if (n >= 9) {
            return "IX";
        }
        else if (n >= 5) {
            return "V";
        }
        else if (n >= 4) {
            return "IV";
        }
        else {
            return roman[n];
        }
    }
}