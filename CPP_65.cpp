#include <string>

string circular_shift(int x, int shift);

int main() {
    // test cases
    int x = 12345;
    int shift = 2;
    string result = circular_shift(x, shift);
    return 0;
}

string circular_shift(int x, int shift) {
    string num = to_string(x);
    int len = num.length();

    if (shift > len) {
        reverse(num.begin(), num.end());
        return num;
    }

    shift = shift % len;
    string res = num.substr(len - shift) + num.substr(0, len - shift);
    return res;
}