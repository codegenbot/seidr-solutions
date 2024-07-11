#include <string>
using namespace std;

string change_base(int x, int base) {
    if (x == 0)
        return "0";
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder >= 10)
            result.insert(0, 1, ('a' + (remainder - 10)));
        else
            result.insert(0, 1, char('0' + remainder));
        x /= base;
    }
    return result;
}