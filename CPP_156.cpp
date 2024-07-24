#include <cassert>
#include <string>

std::string int_to_roman(int num) {
    if (num <= 0)
        return "Input is invalid";

    std::string roman = "";
    int thousands = num / 1000;
    for (int i = 0; i < thousands; i++)
        roman += "M";
    num %= 1000;

    int hundreds = num / 100;
    if (hundreds > 0) {
        for (int i = 0; i < hundreds; i++)
            roman += "C";
        num %= 100;
    }

    int tens = num / 10;
    if (tens > 3)
        roman += "CM";
    else if (tens == 4)
        roman += "CD";
    else {
        for (int i = 0; i < tens; i++)
            roman += "X";
        num %= 10;
    }

    int ones = num;
    if (ones > 3)
        roman += "IX";
    else if (ones == 4)
        roman += "IV";
    else {
        for (int i = 0; i < ones; i++)
            roman += "I";
    }
    return roman;
}

int testMain() {
    assert(int_to_roman(1000) == "M");
    return 0;
}