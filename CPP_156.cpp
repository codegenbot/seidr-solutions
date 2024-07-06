#include <string>

string int_to_mini_roman(int number) {
    string roman = "";
    
    // 1-3: I
    if (number >= 1000) {
        for (int i = 0; i < number / 1000; i++) {
            roman += "M";
        }
        number %= 1000;
    }
    
    // 4-8: IV, V, VI, VII, VIII, IX
    if (number >= 400) {
        roman += "CD";
        number -= 400;
    } else if (number >= 90) {
        roman += "XC";
        number -= 90;
    } else if (number >= 50) {
        roman += "L";
        number -= 50;
    } else if (number >= 40) {
        roman += "XL";
        number -= 40;
    } else if (number >= 10) {
        roman += "X";
        number -= 10;
    } else if (number == 9) {
        roman += "IX";
    } else if (number >= 5) {
        roman += "V";
        number -= 5;
    } else if (number == 4) {
        roman += "IV";
    } else if (number > 0) {
        for (int i = 0; i < number; i++) {
            roman += "I";
        }
    }
    
    return roman;
}