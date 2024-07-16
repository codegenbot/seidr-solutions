#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string numStr = to_string(x);
    int len = numStr.length();
    shift %= len;
    if (shift == 0) {
        return numStr;
    }
    
    if (shift > len) {
        reverse(numStr.begin(), numStr.end());
        return numStr;
    }
    
    string result = numStr.substr(len - shift) + numStr.substr(0, len - shift);
    return result;
}