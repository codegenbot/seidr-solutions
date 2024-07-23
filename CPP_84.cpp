```
#include <string>

std::string solve(int N) {
    int sum = 0;
    while (N > 0) {
        int digit = N & 1;
        if (digit) sum++;
        N >>= 1;
    }
    std::string result = "";
    for (int i = 31; i >= 0; --i) {
        if ((1 << i) <= sum) {
            result += "1";
            sum -= (1 << i);
        } else {
            result += "0";
        }
    }
    return result;
}