#include <iostream>
#include <cassert>
#include <string>

std::string change_base(int a, int b) {
    std::string result;
    while (a > 0) {
        int remainder = a % b;
        result = std::to_string(remainder) + result;
        a /= b;
    }
    return result;
}

int main(){
    int x = 10;
    assert(change_base(x, x + 1) == std::to_string(x));
    return 0;
}