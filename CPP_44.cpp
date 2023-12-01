#include <string>
#include <cassert>

string to_string(int n) {
    if (n == 0) {
        return "0";
    }
    
    string result = "";
    while (n > 0) {
        int remainder = n % 10;
        result = char('0' + remainder) + result;
        n = n / 10;
    }
    return result;
}

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = to_string(remainder) + result;
        x = x / base;
    }
    return result;
}

int main() {
    int x = 10;
    assert(change_base(x, x + 1) == to_string(x));
    return 0;
}