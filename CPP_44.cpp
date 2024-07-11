#include <string>
#include <iomanip>

using namespace std;

string change_base(int x, int base) {
    if(base > 10) {
        return "Base must be less than or equal to 10";
    }
    string res = "";
    while (x > 0) {
        int rem = x % base;
        if(rem >= 10)
            res.insert(0, 1, 'A' + rem - 10);
        else
            res.insert(0, to_string(rem));
        x /= base;
    }
    return res;
}