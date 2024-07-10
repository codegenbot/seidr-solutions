#include <string>

using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder > 9) {
            result.insert(0, "A");
        } else if (remainder > 1) {
            result.insert(0, to_string(remainder));
        } else {
            result.insert(0, "1");
        }
        x /= base;
    }
    return result;
}