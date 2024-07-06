#include <string>

std::string intToMiniRoman(int number) {
    if (number > 3999) {
        return "Invalid Roman numeral";
    }
    
    std::string result;
    int thousands = number / 1000;
    int hundreds = (number % 1000) / 100;
    int tens = (number % 100) / 10;
    int ones = number % 10;

    if (thousands > 0) {
        for (int i = 0; i < thousands; ++i)
            result += "M";
        }
    
    if (hundreds >= 1 && hundreds <= 3) {
        for (int i = 0; i < hundreds; ++i)
            result += "C";
        if (hundreds > 1)
            continue;
        
        switch (number % 100) {
            case 4: { result += "IV"; break; }
            case 9: { result += "IX"; break; }
            default:
                for (int i = 0; i < (hundreds - 1); ++i)
                    result += "C";
        }
    } else if (hundreds > 3) {
        result += "D" + std::string(3 * (hundreds - 3));
        
        switch (number % 100) {
            case 4: { result += "IV"; break; }
            case 9: { result += "IX"; break; }
            default:
                if ((tens >= 1 && tens <= 3) || ones > 0)
                    result += "M";
        }
    } else {
        switch (hundreds) {
            case 4: { result += "CD"; break; }
            case 9: { result += "CM"; break; }
            default:
                for (int i = 0; i < hundreds; ++i)
                    result += "C";
        }
    }

    if (tens >= 1 && tens <= 3) {
        switch (tens * 10 + ones) {
            case 20: { result += "XX"; break; }
            case 30: { result += "XXX"; break; }
            case 40: { result += "XL"; break; }
            case 50: { result += "L"; break; }
            case 60: { result += "LX"; break; }
            case 70: { result += "LXX"; break; }
            case 80: { result += "LXXX"; break; }
            case 90: { result += "XC"; break; }
        }
    } else {
        for (int i = 0; i < tens; ++i)
            result += "X";
        
        switch (ones) {
            case 4: { result += "IV"; break; }
            case 5: { result += "V"; break; }
            case 6: { result += "VI"; break; }
            case 7: { result += "VII"; break; }
            case 8: { result += "VIII"; break; }
            case 9: { result += "IX"; break; }
        }
    }

    return result;
}