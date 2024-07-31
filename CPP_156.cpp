```cpp
#include <cassert>
#include <string>

std::string int_to_mini_roman(int n) {
    if (n >= 1000) {
        return "M";
    } else if (n >= 900) {
        return "CM" + int_to_mini_roman(n - 900);
    } else if (n >= 500) {
        return "D" + int_to_mini_roman(n - 500);
    } else if (n >= 400) {
        return "CD" + int_to_mini_roman(n - 400);
    } else if (n == 300) {
        return "CCC";
    } else if (n >= 200) {
        return "CC" + int_to_mini_roman(n - 200);
    } else if (n >= 100) {
        return "C" + int_to_mini_roman(n - 100);
    } else if (n >= 90) {
        return "XC" + int_to_mini_roman(n - 90);
    } else if (n >= 50) {
        return "L" + int_to_mini_roman(n - 50);
    } else if (n >= 40) {
        return "XL" + int_to_mini_roman(n - 40);
    } else if (n == 30) {
        return "XXX";
    } else if (n >= 20) {
        return "XX" + int_to_mini_roman(n - 20);
    } else if (n >= 10) {
        return "X" + int_to_mini_roman(n - 10);
    } else if (n >= 9) {
        return "IX" + int_to_mini_roman(n - 9);
    } else if (n >= 5) {
        return "V" + int_to_mini_roman(n - 5);
    } else if (n == 4) {
        return "IV";
    } else if (n < 4) {
        switch (n) {
            case 3:
                return "III";
            case 2:
                return "II";
            case 1:
                return "I";
            default:
                return "";
        }
    }
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}