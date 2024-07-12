#include <string>
#include <cassert>
#include <iostream>

string change_base(int x, int base);

int main() {
    // Test the function here
    return 0;
}

string change_base(int x, int base){
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}