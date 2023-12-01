#include <string>

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x = x / base;
    }
    return result;
}

int main() {
    int x;
    cin >> x;

    change_base(x, x + 1);

    return 0;
}