#include <iostream>
#include <cassert>

int miniToRoman(int n) {
    int val[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char sym[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int i=0;
    roman = "";
    while (n>0) {
        if (n >= val[i]) {
            n -= val[i];
            roman += sym[i];
        }
        else i++;
    }
    return roman;
}

int main_test() {
    std::cout << miniToRoman(1999) << std::endl;
    assert(miniToRoman(1000) == "M");
    return 0;
}