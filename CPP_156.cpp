```cpp
#include <cassert>
#include <string>
#include <iostream>

using namespace std;

string intToMiniRoman(int num) {
    string result;
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    while (num > 0) {
        if (num >= val[i]) {
            num -= val[i];
            result += sym[i];
        } else {
            i++;
        }
    }
    return result; 
}

int main() { 
    assert(intToMiniRoman(1000) == "M");
    cout << intToMiniRoman(4) << endl;
    return 0;
}