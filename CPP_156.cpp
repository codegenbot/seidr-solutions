#include <cassert>
#include <string>

std::string int_to_roman(int number) {
    if (number <= 0)
        return "";
    
    std::string roman = "";
    
    int thousands = number / 1000;
    for (int i = 0; i < thousands; i++)
        roman += "M";
    
    number %= 1000;
    
    int hundreds = number / 100;
    if (hundreds > 0) {
        for (int i = 0; i < hundreds; i++)
            roman += "C";
        
        if (hundreds == 4)
            roman += "CD";
        else if (hundreds == 9)
            roman += "CM";
    }
    
    number %= 100;
    
    int tens = number / 10;
    for (int i = 0; i < tens; i++)
        roman += "X";
    
    number %= 10;
    
    int ones = number;
    if (ones > 3)
        roman += "IV" + std::string(ones - 4, 'I');
    else {
        for (int i = 0; i < ones; i++)
            roman += "I";
        
        if (ones == 4)
            roman += "IV";
        else if (ones == 9)
            roman += "IX";
    }
    
    return roman;
}

int testMain() {
    assert(int_to_roman(1000) == "M");
    return 0;
}