```
#include <iostream>
#include <array>
#include <string>
#include <cassert>
using namespace std;

const array<const char*, 13> roman = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

int int_to_mini_roman(int num) {
    string str;
    while (num > 0) {
        if (num >= 1000) {
            str.push_back('m');
            num -= 1000;
        } else if (num >= 900) {
            str.push_back('cm');
            num -= 900;
        } else if (num >= 500) {
            str.push_back('d');
            num -= 500;
        } else if (num >= 400) {
            str.push_back('cd');
            num -= 400;
        } else if (num >= 100) {
            str.push_back('c');
            num -= 100;
        } else if (num >= 90) {
            str.push_back('xc');
            num -= 90;
        } else if (num >= 50) {
            str.push_back('l');
            num -= 50;
        } else if (num >= 40) {
            str.push_back('xl');
            num -= 40;
        } else if (num >= 10) {
            str.push_back('x');
            num -= 10;
        } else if (num >= 9) {
            str.push_back('ix');
            num -= 9;
        } else if (num >= 5) {
            str.push_back('v');
            num -= 5;
        } else if (num >= 4) {
            str.push_back('iv');
            num -= 4;
        } else {
            str.push_back('i');
            num -= 1;
        }
    }
    return str;
}

int main() {
    assert (std::to_string(int_to_mini_roman(1000)) == "m");
    return 0;
}
```