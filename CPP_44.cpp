#include <string>
#include <cassert>
using namespace std;

string change_base(int x, int base) {
    if (x == 0) return "0";
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    for (int x = 0; x <= 100; ++x) {
        assert(change_base(x, x + 1) == to_string(x));
    }
    return 0;
}