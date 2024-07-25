#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int len = str.length();
    if (shift >= len)
        return str;
    else {
        string res = str.substr(shift) + str.substr(0, shift);
        return res;
    }
}