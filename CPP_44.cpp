#include <string>
#include <cctype>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int temp = x % base;
        if (temp > 9)
            res.insert(0, 1, ((temp <= 35)?to_string(temp):string(1,(char)(temp + 55)) ));
        else
            res.insert(0, to_string(temp));
        x /= base;
    }
    return res;
}