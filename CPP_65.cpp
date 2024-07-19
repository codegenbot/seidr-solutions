#include <string>

string circular_shift(int x, int shift);

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.size();
    shift = shift % n;
    if (shift == 0) {
        return str;
    }
    string result = str.substr(n - shift) + str.substr(0, n - shift);
    return result;
}

int main() {
    // main function code
    return 0;
}