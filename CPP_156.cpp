#include <cassert>

std::string toMiniRomanHelper(int num, std::string str, std::string roman) {
    if (num == 0)
        return str;
    if (num >= 4000)
        return "IV";
    if (num >= 1000) {
        str += roman;
        return toMiniRomanHelper(num - 1000, str, "M");
    }
    if (num >= 900)
        return "CM";
    if (num >= 500) {
        str += roman;
        return toMiniRomanHelper(num - 500, str, "D");
    }
    if (num >= 400)
        return "CD";
    if (num >= 100) {
        str += roman[0];
        return toMiniRomanHelper(num - 100, str, &roman[1]);
    }
    if (num >= 90)
        return "XC";
    if (num >= 50) {
        str += roman[0];
        return toMiniRomanHelper(num - 50, str, &roman[1]);
    }
    if (num >= 40)
        return "XL";
    if (num >= 10) {
        str += roman[0];
        return toMiniRomanHelper(num - 10, str, &roman[1]);
    }
    if (num >= 9)
        return "IX";
    if (num >= 5) {
        str += roman[0];
        return toMiniRomanHelper(num - 5, str, &roman[1]);
    }
    if (num >= 4)
        return "IV";
    str += roman[0];
    return str + roman[1];
}

std::string int_to_mini_roman(int num) {
    return toMiniRomanHelper(num, "", "");
}