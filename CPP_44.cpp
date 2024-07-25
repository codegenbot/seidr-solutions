#include <algorithm>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int rem = x % base;
        if (rem >= 10) {
            res += ((char)(48 + rem));
        } else {
            res += ((char)(48 + rem));
        }
        x /= base;
    }
    std::reverse(res.begin(), res.end());
    return res;
}