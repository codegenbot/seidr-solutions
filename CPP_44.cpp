#include <iostream>
#include <string>

using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int temp = x % base;
        if (temp > 9)
            res.insert(0, to_string(temp).substr(1)).insert(0, 1, ((temp + 55)));
        else
            res.insert(0, to_string(temp));
        x /= base;
    }
    return res;
}