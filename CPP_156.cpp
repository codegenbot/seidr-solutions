```cpp
const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int int_to_roman(int n) {
    const char *ptr;
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
        ptr = n >= 90 ? roman[1] : roman[4];
        return ptr + int_to_roman(n - (ptr == "CM" || ptr == "IX" ? 90 : 100));
    }
    else if (n >= 50) {
        return string("L") + int_to_roman(n - 50);
    }
    else if (n >= 40) {
        return string("XL") + int_to_roman(n - 40);
    }
    else if (n >= 10) {
        ptr = n >= 9 ? roman[8] : roman[5];
        return ptr + int_to_roman(n - (ptr == "IX" || ptr == "IV" ? 9 : 10));
    }
    else if (n >= 5) {
        return string("V") + int_to_roman(n - 5);
    }
    else if (n >= 4) {
        return string("IV") + int_to_roman(n - 4);
    }
    else {
        return string("I");
    }
}

int main() {
    assert(int_to_roman(1000) == "M");
    return 0;
}