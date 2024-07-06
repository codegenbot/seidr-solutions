#include <cassert>
#include <string>

std::string int_toRoman(int num) {
    std::string roman;
    int thousand = num / 1000;
    int fourhundred = (num % 1000) / 400;
    int twohundred = (num % 400) / 200;
    int onehundred = (num % 200) / 100;
    int fifty = (num % 100) / 50;
    int ten = (num % 50) / 10;
    int five = (num % 10) / 5;
    int one = num % 5;

    for(int i = 0; i < thousand; i++) {
        roman += "M";
    }
    for(int i = 0; i < fourhundred; i++) {
        roman += "CD";
    }
    for(int i = 0; i < twohundred; i++) {
        roman += "DII";
    }
    for(int i = 0; i < onehundred; i++) {
        roman += "C";
    }
    for(int i = 0; i < fifty; i++) {
        roman += "L";
    }
    for(int i = 0; i < ten; i++) {
        roman += "X";
    }
    for(int i = 0; i < five; i++) {
        roman += "V";
    }
    for(int i = 0; i < one; i++) {
        roman += "I";
    }

    return roman;
}

int main() {
    assert(int_toRoman(1000) == "M");
    return 0;
}