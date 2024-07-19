#include <string>

using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    int n = str.length();
    shift %= n;
    
    if (shift == 0)
        return str;
        
    else if (shift >= n)
        return str.substr(n-shift) + str.substr(0, n-shift);

    else
        return str.substr(shift) + str.substr(0, shift);
}