#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    if (shift >= n)
        return str.substr(n - shift) + str.substr(0, n - shift);
    else
        return str.substr(n - shift) + str.substr(0, n - shift);
}