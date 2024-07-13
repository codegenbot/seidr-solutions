#include <iostream>
#include <cassert>

int intToMiniRoman(int n) {
    if (n <= 0)
        return 0;
    else if (n >= 1000) {
        return "M" + intToMiniRoman(n - 1000);
    } 
    else if (n >= 900) {
        return "CM" + intToMiniRoman(n - 900);
    }
    else if (n >= 500) {
        return "D" + intToMiniRoman(n - 500);
    }
    else if (n >= 400) {
        return "CD" + intToMiniRoman(n - 400);
    } 
    else if (n >= 100) {
        return intRomans[n % 100] + intToMiniRoman(n / 100);
    } 
    else if (n >= 90) {
        return "XC" + intToMiniRoman(n - 90);
    }
    else if (n >= 50) {
        return "L" + intToMiniRoman(n - 50);
    }
    else if (n >= 40) {
        return "XL" + intToMiniRoman(n - 40);
    } 
    else if (n >= 10) {
        return intRomans[n % 10] + intToMiniRoman(n / 10);
    } 
    else if (n >= 9) {
        return "IX" + intToMiniRoman(n - 9);
    }
    else if (n >= 5) {
        return "V" + intToMiniRoman(n - 5);
    }
    else if (n >= 4) {
        return "IV";
    } 
    else
        if (n < 1 || n > 39) return intRomans[n % 10]; else return "I";
}

const char* intRomans[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX", "XXI", "XXII", "XXIII", "XXIV", "XXV", "XXVI", "XXVII", "XXVIII", "XXIX", "XXX", "XXXI", "XXXII", "XXXIII", "XXXIV", "XXXV", "XXXVI", "XXXVII", "XXXVIII", "XXXIX", "XL", "XLI", "XLII", "XLIII", "XLIV", "LV", "LVI", "LVII", "LVIII", "LIX", "L", "LI", "LII", "LIII", "LIV", "LV", "LVI", "LVII", "LVIII", "LIX", "LX", "LXI", "LXII", "LXIII", "LXIV", "LXV", "LXVI", "LXVII", "LXVIII", "LXIX", "LXX", "LXXI", "LXXII", "LXXIII", "LXXIV", "LXXV", "LXXVI", "LXXVII", "LXXVIII", "LXXIX", "LXXX", "LXXXI", "LXXXII", "LXXXIII", "LXXXIV", "LXXXV", "LXXXVI", "LXXXVII", "LXXXVIII", "LXXXIX", "XC", "XCI", "XCII", "XCIII", "XCIV", "XCV", "XCVI", "XCVII", "XCVIII", "XCIX", "C"};

int main_test() {
    std::cout << intToMiniRoman(1999) << std::endl;
    assert(intToMiniRoman(1000) == "M");
    return 0;
}