#include <cassert>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int int_to_roman(int n) {
    if (n >= 1000) {
        return string("M");
    }
    else if (n >= 900) {
        return string("CM") + int_to_roman(n - 900);
    }
    else if (n >= 500) {
        return string("D") + int_to_roman(n - 500);
    }
    else if (n >= 400) {
        return string("CD") + int_to_roman(n - 400);
    }
    else if (n >= 100) {
        return n >= 90 ? string("CM") : (n >= 50 ? string("L") : (n >= 40 ? string("XL") : (n >= 10 ? (n >= 9 ? string("IX") : (n >= 5 ? string("V") : (n >= 4 ? string("IV") : string("I"))))))) + int_to_roman(n - ((n >= 90) || (n >= 50) ? 50 : 10));
    }
    else {
        return "";
    }
}

int main() {
    assert(int_to_roman(1000) == "M");
    return 0;
}