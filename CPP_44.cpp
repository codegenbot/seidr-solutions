```cpp
#include <string>
using namespace std;

string change_base(int x, int base) {
    if (x == 0)
        return "0";
    string res = "";
    while (x > 0) {
        int r = x % base;
        res.insert(0, to_string(r)); // or '0' + r
        x /= base;
    }
    return res;
}