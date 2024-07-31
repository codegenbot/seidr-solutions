#include <string>
using namespace std;

#include <cassert>

string int_to_mini_roman(int n) {
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string result = "";
    for (int i = 0; i < 13; i++) {
        while (n >= value[i]) {
            n -= value[i];
            result += roman[i];
        }
    }
    
    return result;
}