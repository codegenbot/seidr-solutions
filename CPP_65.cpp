#include <string>

string circular_shift(int x, int shift);

int main() {
    int x, shift;
    cin >> x >> shift;
    cout << circular_shift(x, shift);
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