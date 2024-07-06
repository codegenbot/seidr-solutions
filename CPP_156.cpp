#include <cassert>

string int_toRoman(int num) {
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    romanNum = "";
    for(int i=12; i>=0; --i)
        while(num >= val[i])
            num -= val[i], romanNum += roman[i];
            
    return romanNum;
}

int mainTest() {
    assert(int_toRoman(1000) == "M");
    return 0;
}