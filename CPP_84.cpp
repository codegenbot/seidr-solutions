#include <string>

string solve(int N) {
    string result;
    while (N > 0) {
        if ((N & 1) == 1)
            result = '1' + result;
        else
            result = '0' + result;
        N >>= 1;
    }
    return result;
}