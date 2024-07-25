#include <string>
#include <iostream>
#include <cassert>

std::string change_base(int x, int base) {
    std::string result = "";
    while(x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    // Convert the result to lowercase
    for(char& c : result) {
        if(c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';
        }
    }
    return result;
}

int convert_and_check(int x, int base) {
    return change_base(x, base);
}

int main() {
    int x = 10;
    assert(convert_and_check(x, x + 1) == std::to_string(x));
    return 0;
}