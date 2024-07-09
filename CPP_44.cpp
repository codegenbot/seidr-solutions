#include<string>
using namespace std;

string change_base(int x, int base) {
    string res = "";
    while (x > 0) {
        int remainder = x % base;
        res = (remainder < 10 ? to_string(remainder) : string(1, 'A') + (remainder - 10)) + res;
        x /= base;
    }
    return res;
}