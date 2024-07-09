#include <iostream>
using namespace std;

string int_to_mini_roman(int n) {
    if(n > 3999) {
        return "This number is too large";
    }
    string roman = "";
    int thousands = n / 1000;
    for(int i = 0; i < thousands; i++) {
        roman += "M";
    }
    n %= 1000;
    int hundreds = n / 100;
    if(hundreds > 3) {
        roman += string(4-hundreds) + "CM"; 
    } else {
        for(int i = 0; i < hundreds; i++) {
            roman += "C";
        }
    }
    n %= 100;
    int tens = n / 10;
    if(tens == 9) {
        roman += "XCIX";
    } else {
        if(tens > 3) {
            roman += string(4-tens) + "XL"; 
        } else {
            for(int i = 0; i < tens; i++) {
                roman += "X";
            }
        }
    }
    n %= 10;
    int ones = n;
    if(ones > 3) {
        roman += string(4-ones) + "IX"; 
    } else {
        for(int i = 0; i < ones; i++) {
            roman += "I";
        }
    }
    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}