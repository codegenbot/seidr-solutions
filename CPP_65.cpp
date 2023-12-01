#include <string>

string circular_shift(int x, int shift);

int main() {
    // Test cases
    cout << circular_shift(12345, 2) << endl; // Expected output: 45123
    cout << circular_shift(987654321, 5) << endl; // Expected output: 432198765

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