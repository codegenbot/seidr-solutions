```c++
#include <string>

std::string int_to_mini_roman(int number) {
    if (number >= 1000) {
        return "M";
    } else if (number >= 900) {
        return "CM" + int_to_mini_roman(number - 900);
    } else if (number >= 500) {
        return "D" + int_to_mini_roman(number - 500);
    } else if (number >= 400) {
        return "CD" + int_to_mini_roman(number - 400);
    } else if (number >= 100) {
        switch (number % 100) {
            case 99:
                return "XCIX";
            case 90:
                return "XM";
            default:
                std::string str = int_to_mini_roman(number / 100) + "C";
                switch (number % 100) {
                    case 1:
                        str += "I";
                        break;
                    case 2:
                        str += "II";
                        break;
                    case 3:
                        str += "III";
                        break;
                    default:
                        break;
                }
                return str;
        }
    } else if (number >= 50) {
        switch (number % 50) {
            case 49:
                return "XLIX";
            case 40:
                return "Xl";
            default:
                std::string str = int_to_mini_roman(number / 50) + "L";
                switch (number % 50) {
                    case 1:
                        str += "I";
                        break;
                    case 2:
                        str += "II";
                        break;
                    case 3:
                        str += "III";
                        break;
                    default:
                        break;
                }
                return str;
        }
    } else if (number >= 10) {
        switch (number % 10) {
            case 9:
                return "IX";
            case 8:
                return "VIIII";
            case 7:
                return "VII";
            case 6:
                return "VI";
            case 5:
                return "V";
            default:
                std::string str = int_to_mini_roman(number / 10) + "X";
                switch (number % 10) {
                    case 1:
                        str += "I";
                        break;
                    case 2:
                        str += "II";
                        break;
                    case 3:
                        str += "III";
                        break;
                    case 4:
                        str += "IV";
                        break;
                    default:
                        break;
                }
                return str;
        }
    } else if (number >= 1) {
        switch (number % 5) {
            case 4:
                return "IV";
            case 3:
                return "III";
            case 2:
                return "II";
            case 1:
                return "I";
            default:
                break;
        }
    } else if (number >= -1) {
        return "";
    } else {
        return "-";
    }
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}