#include <string>

std::string intToMiniRoman(int number) {
    if (number > 3999) {
        return "Invalid Roman Numeral";
    }
    
    std::string roman = "";
    
    while (number >= 1000) {
        roman += "M";
        number -= 1000;
    }
    
    while (number >= 900) {
        roman += "CM";
        number -= 900;
    }
    
    while (number >= 500) {
        roman += "D";
        number -= 500;
    }
    
    while (number >= 400) {
        roman += "CD";
        number -= 400;
    }
    
    while (number >= 100) {
        if (number >= 900) {
            roman += "CM";
            number -= 900;
        } else if (number >= 500) {
            roman += "D";
            number -= 500;
        } else if (number >= 400) {
            roman += "CD";
            number -= 400;
        } else {
            while (number >= 100) {
                roman += "C";
                number -= 100;
            }
        }
    }
    
    while (number >= 90) {
        roman += "XC";
        number -= 90;
    }
    
    while (number >= 50) {
        if (number >= 500) {
            roman += "D";
            number -= 500;
        } else if (number >= 900) {
            roman += "CM";
            number -= 900;
        } else {
            roman += "L";
            number -= 50;
        }
    }
    
    while (number >= 40) {
        roman += "XL";
        number -= 40;
    }
    
    while (number >= 10) {
        if (number >= 90) {
            roman += "XC";
            number -= 90;
        } else if (number >= 50) {
            roman += "L";
            number -= 50;
        } else {
            while (number >= 10) {
                roman += "X";
                number -= 10;
            }
        }
    }
    
    while (number >= 9) {
        roman += "IX";
        number -= 9;
    }
    
    while (number >= 5) {
        if (number >= 50) {
            roman += "L";
            number -= 50;
        } else if (number >= 90) {
            roman += "XC";
            number -= 90;
        } else {
            roman += "V";
            number -= 5;
        }
    }
    
    while (number >= 4) {
        roman += "IV";
        number -= 4;
    }
    
    while (number >= 1) {
        if (number >= 9) {
            roman += "IX";
            number -= 9;
        } else if (number >= 5) {
            roman += "V";
            number -= 5;
        } else {
            roman += "I";
            number -= 1;
        }
    }
    
    return roman;
}