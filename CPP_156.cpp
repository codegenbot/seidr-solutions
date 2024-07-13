#include <iostream>
#include <cassert>
#include <string>

std::string intToMiniRoman(int n) {
    if (n <= 0)
        return "";
    else if (n >= 1000) {
        return "M" + intToMiniRoman(n - 1000);
    } 
    else if (n >= 900) {
        return "CM" + intToMiniRoman(n - 900);
    }
    else if (n >= 500) {
        return "D" + intToMiniRoman(n - 500);
    }
    else if (n >= 400) {
        return "CD" + intToMiniRoman(n - 400);
    } 
    else if (n >= 100) {
        std::string roman = "";
        switch (n % 100) {
            case 1: roman = "I"; break;
            case 2: roman = "II"; break;
            case 3: roman = "III"; break;
            case 4: roman = "IV"; break;
            case 5: roman = "V"; break;
            case 6: roman = "VI"; break;
            case 7: roman = "VII"; break;
            case 8: roman = "VIII"; break;
            case 9: roman = "IX"; break;
            default:
                switch (n % 100) {
                    case 10: roman = "X"; break;
                    case 11: roman = "XI"; break;
                    case 12: roman = "XII"; break;
                    case 13: roman = "XIII"; break;
                    case 14: roman = "XIV"; break;
                    case 15: roman = "XV"; break;
                    case 16: roman = "XVI"; break;
                    case 17: roman = "XVII"; break;
                    case 18: roman = "XVIII"; break;
                    case 19: roman = "XIX"; break;
                    case 20: roman = "XX"; break;
                    case 30: roman = "XXX"; break;
                    case 40: roman = "XL"; break;
                    case 50: roman = "L"; break;
                    case 60: roman = "LX"; break;
                    case 70: roman = "LXX"; break;
                    case 80: roman = "LXXX"; break;
                    case 90: roman = "XC"; break;
                    default:
                        switch (n % 100) {
                            case 21: roman = "XXI"; break;
                            case 22: roman = "XXII"; break;
                            case 23: roman = "XXIII"; break;
                            case 24: roman = "XXIV"; break;
                            case 25: roman = "XXV"; break;
                            case 26: roman = "XXVI"; break;
                            case 27: roman = "XXVII"; break;
                            case 28: roman = "XXVIII"; break;
                            case 29: roman = "XXIX"; break;
                            default:
                                switch (n % 100) {
                                    case 31: roman = "XXXI"; break;
                                    case 32: roman = "XXXII"; break;
                                    case 33: roman = "XXXIII"; break;
                                    case 34: roman = "XXXIV"; break;
                                    case 35: roman = "XXXV"; break;
                                    case 36: roman = "XXXVI"; break;
                                    case 37: roman = "XXXVII"; break;
                                    case 38: roman = "XXXVIII"; break;
                                    case 39: roman = "XXXIX"; break;
                                    default:
                                        switch (n % 100) {
                                            case 41: roman = "XLI"; break;
                                            case 42: roman = "XLII"; break;
                                            case 43: roman = "XLIII"; break;
                                            case 44: roman = "XLIV"; break;
                                            case 45: roman = "XLV"; break;
                                            case 46: roman = "XLVI"; break;
                                            case 47: roman = "XLVII"; break;
                                            case 48: roman = "XLVIII"; break;
                                            case 49: roman = "XLIX"; break;
                                            default:
                                                switch (n % 100) {
                                                    case 51: roman = "LI"; break;
                                                    case 52: roman = "LII"; break;
                                                    case 53: roman = "LIII"; break;
                                                    case 54: roman = "LIV"; break;
                                                    case 55: roman = "LV"; break;
                                                    case 56: roman = "LVI"; break;
                                                    case 57: roman = "LVII"; break;
                                                    case 58: roman = "LVIII"; break;
                                                    case 59: roman = "LIX"; break;
                                                    default:
                                                        switch (n % 100) {
                                                            case 61: roman = "LXI"; break;
                                                            case 62: roman = "LXII"; break;
                                                            case 63: roman = "LXIII"; break;
                                                            case 64: roman = "LXIV"; break;
                                                            case 65: roman = "LXV"; break;
                                                            case 66: roman = "LXVI"; break;
                                                            case 67: roman = "LXVII"; break;
                                                            case 68: roman = "LXVIII"; break;
                                                            case 69: roman = "LXIX"; break;
                                                            default:
                                                                switch (n % 100) {
                                                                    case 71: roman = "LXXI"; break;
                                                                    case 72: roman = "LXXII"; break;
                                                                    case 73: roman = "LXXIII"; break;
                                                                    case 74: roman = "LXXIV"; break;
                                                                    case 75: roman = "LXXV"; break;
                                                                    case 76: roman = "LXXVI"; break;
                                                                    case 77: roman = "LXXVII"; break;
                                                                    case 78: roman = "LXXVIII"; break;
                                                                    case 79: roman = "LXXIX"; break;
                                                                    default:
                                                                        switch (n % 100) {
                                                                            case 81: roman = "LXXXI"; break;
                                                                            case 82: roman = "LXXXII"; break;
                                                                            case 83: roman = "LXXXIII"; break;
                                                                            case 84: roman = "LXXXIV"; break;
                                                                            case 85: roman = "LXXXV"; break;
                                                                            case 86: roman = "LXXXVI"; break;
                                                                            case 87: roman = "LXXXVII"; break;
                                                                            case 88: roman = "LXXXVIII"; break;
                                                                            case 89: roman = "LXXXIX"; break;
                                                                            default:
                                                                                return "XC" + intToMiniRoman(n - 90);
                                                                        }
                                                                }
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
        return n % 100 == 0 ? "" : roman;
    } else if (n >= 4) {
        return "IV" + intToMiniRoman(n - 4);
    } 
    else if (n >= 1) {
        switch (n) {
            case 1: return "I"; break;
            case 2: return "II"; break;
            case 3: return "III"; break;
            default:
                return "";
        }
    }
    return "";
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << intToMiniRoman(n) << std::endl;
    return 0;
}