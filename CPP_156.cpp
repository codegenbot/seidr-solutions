#include <cassert>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

string int_to_roman(int n) {
    if (n >= 1000) {
        return string("M") + int_to_roman(n - 1000);
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
        if (n >= 90) {
            return string("XC") + int_to_roman(n - 90);
        } 
        else if (n >= 50) {
            return string("L") + int_to_roman(n - 50);
        }
        else if (n >= 40) {
            return string("XL") + int_to_roman(n - 40);
        }
        else {
            if (n >= 9) {
                return string("IX") + int_to_roman(n - 9);
            } 
            else {
                return string("X");
            }
        }
    }
    else if (n >= 50) {
        return string("L") + int_to_roman(n - 50);
    }
    else if (n >= 40) {
        return string("XL") + int_to_roman(n - 40);
    }
    else if (n >= 10) {
        if (n >= 9) {
            return string("IX");
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
    else if (n >= 5) {
        return string("V");
    }
    else if (n >= 4) {
        return string("IV");
    }
    else {
        return string("I");
    }
}