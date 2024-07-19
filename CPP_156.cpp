#include <cassert>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

std::string intToMiniRoman(int num) {
    stringstream roman;
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    while (num > 0) {
        if (num >= val[i]) {
            num -= val[i];
            roman << sym[i];
        } else {
            i++;
        }
    }
    string result = roman.str();
    roman >> result; 
    return result; 
}

int main() { 
    assert(intToMiniRoman(1000) == "M");
    cout << intToMiniRoman(4) << endl;
    return 0;
}