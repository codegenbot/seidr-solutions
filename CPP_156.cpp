#include <cassert>
#include <string>

std::string int_to_mini_roman(int n) {
    std::string mini_roman;
    if (n >= 1000) {
        int thousands = n / 1000;
        for (int i = 0; i < thousands; i++) {
            mini_roman += "M";
        }
        n %= 1000;
    }
    if (n >= 900) {
        mini_roman += "CM";
        n -= 900;
    } else if (n >= 500) {
        int fivehundreds = n / 500;
        for (int i = 0; i < fivehundreds; i++) {
            mini_roman += "D";
        }
        n %= 500;
    } else if (n >= 400) {
        mini_roman += "CD";
        n -= 400;
    } else {
        int hundreds = n / 100;
        for (int i = 0; i < hundreds; i++) {
            mini_roman += "C";
        }
        n %= 100;
    }
    if (n >= 90) {
        mini_roman += "XC";
        n -= 90;
    } else if (n >= 50) {
        int fifties = n / 50;
        for (int i = 0; i < fifties; i++) {
            mini_roman += "L";
        }
        n %= 50;
    } else if (n >= 40) {
        mini_roman += "XL";
        n -= 40;
    } else {
        int tens = n / 10;
        for (int i = 0; i < tens; i++) {
            mini_roman += "X";
        }
        n %= 10;
    }
    if (n >= 9) {
        mini_roman += "IX";
        n -= 9;
    } else if (n >= 5) {
        int fives = n / 5;
        for (int i = 0; i < fives; i++) {
            mini_roman += "V";
        }
        n %= 5;
    } else if (n >= 4) {
        mini_roman += "IV";
        n -= 4;
    } else {
        for (int i = 0; i < n; i++) {
            mini_roman += "I";
        }
    }
    return mini_roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}