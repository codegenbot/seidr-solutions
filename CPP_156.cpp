```cpp
#include <iostream>
#include <string>

std::string toMiniRoman(int num) {
    if (num == 0)
        return "0";
    std::string roman = "";
    int thousands = num / 1000;
    for (int i = 0; i < thousands; i++)
        roman += "M";
    num %= 1000;
    int hundreds = num / 100;
    if (hundreds > 3)
        roman += "CM" + toMiniRoman(hundreds - 300);
    else {
        for (int i = 0; i < hundreds; i++)
            roman += "C";
    }
    num %= 100;
    int tens = num / 10;
    if (tens == 9)
        roman += "IX";
    else if (tens >= 5) {
        roman += "D" + toMiniRoman(tens - 5);
    } else {
        for (int i = 0; i < tens; i++)
            roman += "X";
    }
    num %= 10;
    int ones = num;
    if (ones == 9)
        roman += "IX";
    else if (ones >= 5) {
        roman += "V" + toMiniRoman(ones - 5);
    } else {
        for (int i = 0; i < ones; i++)
            roman += "I";
    }
    return roman;
}