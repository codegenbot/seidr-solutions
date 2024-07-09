#include <iostream>
using namespace std;

string int_to_mini_roman(int n) {
    if(n > 3999) {
        return "Error: Number is greater than 3999";
    }
    string roman = "";
    int thousands = n / 1000;
    for(int i = 0; i < thousands; i++) {
        roman += "M";
    }
    n %= 1000;
    int hundreds = n / 100;
    switch(hundreds) {
        case 9:
            roman += "CM";
            break;
        case 8:
            roman += "DC";
            break;
        default:
            for(int i = 0; i < hundreds; i++) {
                roman += "C";
            }
            break;
    }
    n %= 100;
    int tens = n / 10;
    switch(tens) {
        case 9:
            roman += "XC";
            break;
        case 8:
            roman += "LX";
            break;
        default:
            for(int i = 0; i < tens; i++) {
                roman += "X";
            }
            break;
    }
    n %= 10;
    int ones = n;
    switch(ones) {
        case 9:
            roman += "IX";
            break;
        case 8:
            roman += "VIII";
            break;
        default:
            for(int i = 0; i < ones; i++) {
                roman += "I";
            }
            break;
    }
    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}