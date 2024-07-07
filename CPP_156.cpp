#include <string>

std::string toMiniRoman(int num) {
    if (num < 1 || num > 3999) {
        return "Invalid input";
    }
    std::string roman = "";
    int thousands = num / 1000;
    for (int i = 0; i < thousands; i++) {
        roman += "M";
    }
    num %= 1000;
    int hundreds = num / 100;
    if (hundreds > 0) {
        roman += toMiniRomanHelper(hundreds, "C", "D");
    }
    num %= 100;
    int tens = num / 10;
    if (tens > 3) {
        roman += "CM";
        num -= 900;
    } else if (tens > 0) {
        roman += toMiniRomanHelper(tens, "X", "L");
    }
    num %= 10;
    int ones = num;
    if (ones == 9) {
        roman += "IX";
    } else if (ones >= 5) {
        roman += toMiniRomanHelper(ones, "V", "IV");
    } else {
        for (int i = 0; i < ones; i++) {
            roman += "I";
        }
    }
    return roman;
}

std::string toMiniRomanHelper(int num, std::string s1, std::string s2) {
    if (num == 4) {
        return s2;
    } else if (num == 9) {
        return s1 + "I";
    } else {
        std::string roman = "";
        for (int i = 0; i < num / 5; i++) {
            roman += s1[0];
        }
        if(num % 5 > 0)
            roman += toMiniRomanHelper(num % 5, s1, s2);
        return roman;
    }
}

int main() {
    assert(toMiniRoman(1000) == "M");
    return 0;
}