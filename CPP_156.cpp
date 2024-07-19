#include <iostream>
#include <string>

std::string intToMiniRoman(int n) {
    if (n >= 1000) {
        return "M" + intToMiniRoman(n - 1000);
    } else if (n >= 900) {
        return "CM" + intToMiniRoman(n - 900);
    } else if (n >= 500) {
        return "D" + intToMiniRoman(n - 500);
    } else if (n >= 400) {
        return "CD" + intToMiniRoman(n - 400);
    } else if (n >= 100) {
        if (n % 100 == 0) {
            return std::to_string(n / 100) + "C";
        } else {
            return std::to_string(n / 100) + "C" + intToMiniRoman(n % 100);
        }
    } else if (n >= 90) {
        return "XC" + intToMiniRoman(n - 90);
    } else if (n >= 50) {
        return "L" + intToMiniRoman(n - 50);
    } else if (n >= 40) {
        return "XL" + intToMiniRoman(n - 40);
    } else if (n >= 10) {
        if (n % 10 == 0) {
            return std::to_string(n / 10) + "X";
        } else {
            return std::to_string(n / 10) + "X" + intToMiniRoman(n % 10);
        }
    } else if (n >= 9) {
        return "IX" + intToMiniRoman(n - 9);
    } else if (n >= 5) {
        return "V" + intToMiniRoman(n - 5);
    } else if (n >= 4) {
        return "IV" + intToMiniRoman(n - 4);
    } else {
        return "I" + intToMiniRoman(n - 1);
    }
}

int main() {
    assert(intToMiniRoman(4) == "IV");
    std::cout << intToMiniRoman(1000) << std::endl;
    return 0;
}