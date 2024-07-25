#include<string>
using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int r = x % base;
        if (r < 10)
            res = to_string(r) + res;
        else
            res = 'A' + (r - 10) + res;
        x /= base;
    }
    return res;
}