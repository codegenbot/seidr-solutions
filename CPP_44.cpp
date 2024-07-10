#include <string>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int rem = x % base;
        if (rem >= 10)
            res.insert(0, 1, 'A' + rem - 10);
        else
            res.insert(0, 1, '0' + rem);
        x /= base;
    }
    return res;
}