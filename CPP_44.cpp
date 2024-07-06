#include <string>

using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder >= 10)
            result.push_back((remainder - 9) + 'A');
        else
            result.push_back(remainder + '0');
        x /= base;
    }
    reverse(result.begin(), result.end());
    return result;
}