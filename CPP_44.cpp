#include <string>
#include <cassert>
#include <iostream>
using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result == "" ? "0" : result;
}