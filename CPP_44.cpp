#include <string>
#include <iostream>
#include <cassert>
using namespace std;

std::string change_base(int x, int base){
    std::string result = "";
    while(x > 0){
        result = to_string(x % base) + result;
        x /= base;
    }
    return result == "" ? "0" : result;
}