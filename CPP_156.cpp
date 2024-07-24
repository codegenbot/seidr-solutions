#include <cassert>
#include <string>

std::string int_to_roman(int num) {
    if (num <= 0)
        return "0";
    std::string roman = "";
    int thousands = num / 1000;
    for (int i = 0; i < thousands; i++)
        roman += "M";
    num %= 1000;
    int hundreds = num / 100;
    if (hundreds > 3)
        roman += "D" + std::string(4 - hundreds, 'C');
    else
        for (int i = 0; i < hundreds; i++)
            roman += "C";
    num %= 100;
    int tens = num / 10;
    if (tens == 9)
        roman += "CM";
    else if (tens >= 5) {
        roman += "D";
        num -= 50;
    }
    for (int i = 0; i < tens; i++)
        roman += "X";
    num %= 10;
    int ones = num;
    if (ones == 9)
        roman += "IX";
    else if (ones >= 5) {
        roman += "V";
        num -= 5;
    }
    for (int i = 0; i < ones; i++)
        roman += "I";
    return roman;
}

int testMain() {
    assert(int_to_roman(1000) == "M");
    return 0;
}