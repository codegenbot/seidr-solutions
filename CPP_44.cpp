#include <string>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int r = x % base;
        if (r > 9)
            res.insert(0, 1, (char)(r + 'A'));
        else
            res.insert(0, to_string(r));
        x /= base;
    }
    return res;
}