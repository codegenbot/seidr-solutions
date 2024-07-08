#include <string>

using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder >= 10) {
            result.insert(0, 1, (char)(remainder + 'A' - 10));
        } else {
            result.insert(0, to_string(remainder));
        }
        x /= base;
    }
    return result;
}