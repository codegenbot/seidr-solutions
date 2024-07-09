#include <string>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder > 9)
            res.insert(0, 1, (char)(remainder + 'A' - 10));
        else
            res.insert(0, 1, to_string(remainder));
        x /= base;
    }
    return res;
}