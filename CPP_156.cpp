#include <cassert>
#include <string>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

std::string int_to_roman(int n) {
    if (n >= 1000) {
        return "M";
    }
    else if (n >= 900) {
        return "CM" + int_to_roman(n - 900);
    }
    else if (n >= 500) {
        return "D" + int_to_roman(n - 500);
    }
    else if (n >= 400) {
        return "CD" + int_to_roman(n - 400);
    }
    else if (n >= 100) {
        std::string result;
        if (n >= 90) {
            result = "CM";
        } 
        else if (n >= 50) {
            result = "L";
        } 
        else if (n >= 40) {
            result = "XL";
        } 
        else if (n >= 10) {
            if (n >= 9) {
                result = "IX";
            } 
            else if (n >= 5) {
                result = "V";
            } 
            else if (n >= 4) {
                result = "IV";
            } 
            else {
                result = "I";
            }
        }
        return result;
    }
    else {
        return "";
    }
}