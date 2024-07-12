#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str;
    else {
        string res = str.substr(shift);
        for (int i = 0; i < n - shift; i++)
            res += str[i];
        return res;
    }
}