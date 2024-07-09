#include <string>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder >= 10) {
            res = char(55 + remainder) + res; // Convert to 'A' - 'F'
        } else {
            res = to_string(remainder) + res;
        }
        x /= base;
    }
    return res;
}