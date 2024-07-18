#include <iostream>
#include <string>
#include <cassert>

using namespace std;
string change_base(int x, int base);

string change_base(int x, int base){
    string result = "";
    while(x > 0){
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == to_string(x));
    return 0;
}