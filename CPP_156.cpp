#include <cassert>

int main() {
    assert (int_to_mini_romank(1000) == "M");
    return 0;
}

int int_to_mini_romank(int n) {
    string roman = "";
    
    if(n >= 1000) {
        int thousands = n / 1000;
        for(int i = 0; i < thousands; i++) {
            roman += "M";
            n -= 1000;
        }
    }
    
    if(n >= 900) {
        int ninehundreds = n / 900;
        for(int i = 0; i < ninehundreds; i++) {
            roman += "CM";
            n -= 900;
        }
    }
    
    if(n >= 500) {
        int fivehundreds = n / 500;
        for(int i = 0; i < fivehundreds; i++) {
            roman += "D";
            n -= 500;
        }
    }
    
    if(n >= 400) {
        int fourhundreds = n / 400;
        for(int i = 0; i < fourhundreds; i++) {
            roman += "CD";
            n -= 400;
        }
    }
    
    if(n >= 100) {
        int hundreds = n / 100;
        for(int i = 0; i < hundreds; i++) {
            roman += "C";
            n -= 100;
        }
    }
    
    if(n >= 90) {
        int ninetys = n / 90;
        for(int i = 0; i < ninetys; i++) {
            roman += "XC";
            n -= 90;
        }
    }
    
    if(n >= 50) {
        int fifties = n / 50;
        for(int i = 0; i < fifties; i++) {
            roman += "L";
            n -= 50;
        }
    }
    
    if(n >= 40) {
        int forties = n / 40;
        for(int i = 0; i < forties; i++) {
            roman += "XL";
            n -= 40;
        }
    }
    
    if(n >= 10) {
        int tens = n / 10;
        for(int i = 0; i < tens; i++) {
            roman += "X";
            n -= 10;
        }
    }
    
    if(n >= 9) {
        int nines = n / 9;
        for(int i = 0; i < nines; i++) {
            roman += "IX";
            n -= 9;
        }
    }
    
    if(n >= 5) {
        int fives = n / 5;
        for(int i = 0; i < fives; i++) {
            roman += "V";
            n -= 5;
        }
    }
    
    if(n >= 4) {
        int fours = n / 4;
        for(int i = 0; i < fours; i++) {
            roman += "IV";
            n -= 4;
        }
    }
    
    if(n > 0) {
        roman += static_cast<char>(n + 48);
    }
    
    return roman;
}