#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int len = num.length();
    
    if (shift > len) {
        reverse(num.begin(), num.end());
        return num;
    }
    
    shift %= len;
    string shiftedNum = num.substr(len - shift) + num.substr(0, len - shift);
    return shiftedNum;
}