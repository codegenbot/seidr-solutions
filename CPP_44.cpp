#include <string>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder >= 10)
            res.insert(0, 1, 'A' + remainder - 10);
        else
            res.insert(0, 1, '0' + remainder);
        x /= base;
    }
    return res;
}