#include <string>
using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder >= 10) {
            result = char(55 + remainder) + result; // For numbers from 10 to 35
        } else {
            result = to_string(remainder) + result;
        }
        x /= base;
    }
    return result;
}