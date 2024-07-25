#include <string>
std::string int_to_mini_roman(int num) {
    std::string roman = "";
    if (num >= 1000) {
        roman += "M";
        num -= 1000;
    }
    if (num >= 900) {
        roman += "CM";
        num -= 900;
    } else if (num >= 500) {
        roman += "D";
        num -= 500;
    } else if (num >= 400) {
        roman += "CD";
        num -= 400;
    }
    // Convert the remaining number to Roman numerals
    switch (num) {
        case 100:
            roman += "C";
            break;
        case 90:
            roman += "XC";
            break;
        case 50:
            roman += "L";
            break;
        case 40:
            roman += "XL";
            break;
        case 10:
            roman += "X";
            break;
        case 9:
            roman += "IX";
            break;
        case 5:
            roman += "V";
            break;
        case 4:
            roman += "IV";
            break;
        default:
            roman = std::to_string(num);
    }
    return roman;
}