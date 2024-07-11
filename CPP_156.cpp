#include <string>

std::string int_to_mini_roman(int number) {
    std::string roman = "";
    
    while (number > 0) {
        if (number >= 1000) {
            roman += "M";
            number -= 1000;
        } else if (number >= 900) {
            roman += "CM";
            number -= 900;
        } else if (number >= 500) {
            roman += "D";
            number -= 500;
        } else if (number >= 400) {
            roman += "CD";
            number -= 400;
        } else if (number >= 100) {
            if (number >= 90) {
                roman += "XC";
                number -= 90;
            } else {
                roman += "C";
                number -= 100;
            }
        } else if (number >= 90) {
            roman += "XM";
            number -= 90;
        } else if (number >= 50) {
            roman += "L";
            number -= 50;
        } else if (number >= 40) {
            roman += "XL";
            number -= 40;
        } else if (number >= 10) {
            if (number >= 9) {
                roman += "IX";
                number -= 9;
            } else {
                roman += "X";
                number -= 10;
            }
        } else if (number >= 5) {
            roman += "V";
            number -= 5;
        } else if (number >= 4) {
            roman += "IV";
            number -= 4;
        } else {
            roman += "I";
            number -= 1;
        }
    }
    
    return roman;
}