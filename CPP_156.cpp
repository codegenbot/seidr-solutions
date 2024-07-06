#include <string>
using namespace std;
string int_to_mini_roman(int number) {
    string roman = "";
    if (number >= 1000) {
        while (number >= 1000) {
            roman += "M";
            number -= 1000;
        }
    }
    if (number >= 900) {
        while (number >= 900) {
            roman += "CM";
            number -= 900;
        }
    }
    if (number >= 500) {
        while (number >= 500) {
            roman += "D";
            number -= 500;
        }
    }
    if (number >= 400) {
        while (number >= 400) {
            roman += "CD";
            number -= 400;
        }
    }
    if (number >= 100) {
        while (number >= 100) {
            if (number >= 900) break;
            roman += "C";
            number -= 100;
        }
    }
    if (number >= 90) {
        while (number >= 90) {
            roman += "XC";
            number -= 90;
        }
    }
    if (number >= 50) {
        while (number >= 50) {
            roman += "L";
            number -= 50;
        }
    }
    if (number >= 40) {
        while (number >= 40) {
            roman += "XL";
            number -= 40;
        }
    }
    if (number >= 10) {
        while (number >= 10) {
            if (number >= 90) break;
            roman += "X";
            number -= 10;
        }
    }
    if (number >= 9) {
        while (number >= 9) {
            roman += "IX";
            number -= 9;
        }
    }
    if (number >= 5) {
        while (number >= 5) {
            roman += "V";
            number -= 5;
        }
    }
    if (number >= 4) {
        while (number >= 4) {
            roman += "IV";
            number -= 4;
        }
    }
    if (number > 0) {
        roman += "I";
        number--;
    }
    return roman;
}