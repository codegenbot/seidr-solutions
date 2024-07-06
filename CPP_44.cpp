#include <string>

using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder >= 10)
            result.insert(0, 1, (remainder - 9) + 'A');
        else
            result.insert(0, 1, (remainder) + '0');
        x /= base;
    }
    return result;
}