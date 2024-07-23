#include <string>
using namespace std;

string change_base(int x, int base) {
    if (x == 0)
        return "0";
    string res = "";
    while (x > 0) {
        int r = x % base;
        res = to_string(r) + res; 
        x /= base;
    }
    return res;
}