#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    shift = shift % n;
    if (shift == 0)
        return str;
    return str.substr(shift) + str.substr(0, shift);
}