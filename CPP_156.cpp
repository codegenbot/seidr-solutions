#include <stdexcept>

std::string int_to_mini_roman(int number) {
    if (number >= 4000) {
        throw std::runtime_error("Number is too big");
    }
    std::string result = "";
    while (number >= 1000) {
        number -= 1000;
        result += "M";
    }
    int thousands = number / 100;
    if (thousands == 9) {
        result += "CM";
        number -= 900;
    } else if (thousands >= 4) {
        while (thousands >= 4) {
            result += "CD";
            number -= 400;
            thousands -= 4;
        }
    } else {
        for (; thousands > 0; --thousands) {
            result += "C";
        }
    }
    while (number >= 100) {
        if (number >= 900) {
            result += "CM";
            number -= 900;
        } else if (number >= 400) {
            while (number >= 300) {
                result += "CCC";
                number -= 300;
            }
            result += "C";
            number -= 100;
        } else {
            for (; number >= 100; number -= 100) {
                result += "C";
            }
        }
    }
    while (number >= 10) {
        if (number >= 90) {
            result += "XC";
            number -= 90;
        } else if (number >= 40) {
            while (number >= 30) {
                result += "XXX";
                number -= 30;
            }
            result += "X";
            number -= 10;
        } else {
            for (; number >= 10; number -= 10) {
                result += "X";
            }
        }
    }
    while (number > 0) {
        if (number == 9) {
            result += "IX";
            number = 0;
        } else if (number >= 5) {
            result += "V";
            number -= 5;
            while (number >= 1) {
                result += "I";
                number -= 1;
            }
        } else {
            for (; number > 0; --number) {
                result += "I";
            }
        }
    }
    return result;
}