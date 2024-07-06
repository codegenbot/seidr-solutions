#include <cassert>
#include <string>

std::string int_toRoman(int num) {
    if(num < 1) {
        return "";
    }

    std::string roman;
    int value[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char symbol[13] = {'M','CM','D','CD','C','XC','L','XL','X','IX','V','IV','I'};

    for(int i=0; i<12; i++) {
        while(num >= value[i]) {
            roman += symbol[i];
            num -= value[i];
        }
    }

    return roman;
}

int mainTest() {
    assert(int_toRoman(1000) == "M");
    return 0;
}