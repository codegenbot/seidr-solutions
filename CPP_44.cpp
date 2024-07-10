#include <string>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int rem = x % base;
        if (rem >= 10)
            res.insert(0, 1, (char)(rem + 'A'));
        else
            res.insert(0, to_string(rem));
        x /= base;
    }
    return res;
}