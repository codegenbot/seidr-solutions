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
                if (n % 100 >= 10 && n % 100 <= 90) {
                    roman = "X" + intToMiniRoman(n % 100 - 10);
                } else {
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