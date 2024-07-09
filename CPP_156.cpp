#include <cassert>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

int int_to_mini_romank(int n) {
    if(n >= 1000){
        return strlen(roman[0]);
    } else if (n >= 900) {
        return strlen("CM");
    } else if (n >= 500) {
        return strlen(roman[2]);
    } else if (n >= 400) {
        return strlen("CD");
    } else if (n >= 100) {
        return strlen(roman[4]);
    } else if (n >= 90) {
        return strlen("XC");
    } else if (n >= 50) {
        return strlen(roman[6]);
    } else if (n >= 40) {
        return strlen("XL");
    } else if (n >= 10) {
        return strlen(roman[8]);
    } else if (n >= 9) {
        return strlen("IX");
    } else if (n >= 5) {
        return strlen(roman[10]);
    } else if (n >= 4) {
        return strlen("IV");
    } else{
        return strlen(roman[12]);
    }
}

int main() {
    assert(int_to_mini_romank(1000) == 3);
    return 0;
}