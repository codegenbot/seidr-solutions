#include <string>

std::string int_to_mini_romank(int n) {
    std::string roman = "";
    if (n >= 1000) {
        while (n >= 1000) {
            roman += "M";
            n -= 1000;
        }
    }
    if (n >= 900) {
        while (n >= 900) {
            roman += "CM";
            n -= 900;
        }
    }
    else if (n >= 500) {
        while (n >= 500) {
            roman += "D";
            n -= 500;
        }
    }
    else if (n >= 400) {
        while (n >= 400) {
            roman += "CD";
            n -= 400;
        }
    }
    else if (n >= 100) {
        while (n >= 100) {
            roman += (n % 10 == 0 ? "" : "I");
            roman += "C";
            n -= 100;
        }
    }
    else if (n >= 90) {
        while (n >= 90) {
            roman += "XC";
            n -= 90;
        }
    }
    else if (n >= 50) {
        while (n >= 50) {
            roman += "L";
            n -= 50;
        }
    }
    else if (n >= 40) {
        while (n >= 40) {
            roman += "XL";
            n -= 40;
        }
    }
    else if (n >= 10) {
        while (n >= 10) {
            roman += (n % 4 == 0 ? "" : "I");
            roman += "X";
            n -= 10;
        }
    }
    else if (n >= 9) {
        while (n >= 9) {
            roman += "IX";
            n -= 9;
        }
    }
    else if (n >= 5) {
        while (n >= 5) {
            roman += "V";
            n -= 5;
        }
    }
    else if (n >= 4) {
        while (n >= 4) {
            roman += "IV";
            n -= 4;
        }
    }
    else {
        while (n > 0) {
            roman += "I";
            n--;
        }
    }

    return roman;
}