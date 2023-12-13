
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

vector<const char*> roman = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

string int_to_mini_roman(int num) {
    string str;
    while (num > 0) {
        if (num >= 1000) {
            str.append("m");
            num -= 1000;
        } else if (num >= 900) {
            str.append("cm");
            num -= 900;
        } else if (num >= 500) {
            str.append("d");
            num -= 500;
        } else if (num >= 400) {
            str.append("cd");
            num -= 400;
        } else if (num >= 100) {
            str.append("c");
            num -= 100;
        } else if (num >= 90) {
            str.append("xc");
            num -= 90;
        } else if (num >= 50) {
            str.append("l");
            num -= 50;
        } else if (num >= 40) {
            str.append("xl");
            num -= 40;
        } else if (num >= 10) {
            str.append("x");
            num -= 10;
        } else if (num >= 9) {
            str.append("ix");
            num -= 9;
        } else if (num >= 5) {
            str.append("v");
            num -= 5;
        } else if (num >= 4) {
            str.append("iv");
            num -= 4;
        } else {
            str.append("i");
            num -= 1;
        }
    }
    return str;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");
    return 0;
}