#include <cassert>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int int_to_roman(int n) {
    if (n >= 1000) return "M"\0;
    else if (n >= 900) return "CM" + int_to_roman(n - 900);
    else if (n >= 500) return "D" + int_to_roman(n - 500);
    else if (n >= 400) return "CD" + int_to_roman(n - 400);
    else if (n >= 100) return n >= 90 ? "CM" : (n >= 50 ? (n >= 40 ? "XL" : (n >= 10 ? (n >= 9 ? "IX" : (n >= 5 ? "V" : (n >= 4 ? "IV" : "I"))) ) ) + int_to_roman((n >= 90) ? 0 : (n >= 50 ? n - 50 : 10));
    }
    else {
        return "";
    }
}

int main() {
    assert(int_to_roman(1000) == "M"\0);
    return 0;
}