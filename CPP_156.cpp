#include <cassert>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int int_to_mini_roman(int n) {
    if(n >= 1000){
        return strlen(roman[0]);
    } else if (n >= 900) {
        return strlen(roman[1]);
    } else if (n >= 500) {
        return strlen(roman[2]);
    } else if (n >= 400) {
        return strlen(roman[3]);
    } else if (n >= 100) {
        return strlen(roman[4]);
    } else if (n >= 90) {
        return strlen(roman[5]);
    } else if (n >= 50) {
        return strlen(roman[6]);
    } else if (n >= 40) {
        return strlen(roman[7]);
    } else if (n >= 10) {
        if(n == 9) return strlen(roman[8]);
        else if(n == 5) return strlen(roman[9]);
        else if(n > 4 && n < 10) return strlen(roman[10]);
        else if(n > 4) return strlen(roman[11]);
    }
    return strlen("I");
}

int main() {
    assert(int_to_mini_roman(1000) == 1);
    return 0;
}