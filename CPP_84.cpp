#include <string>

string solve(int N) {
    int sum = 0;
    string result = "";
    
    while (N > 0) {
        sum += N & 1;
        N >>= 1;
    }
    
    while (sum > 0) {
        if (sum & 1)
            result.append("1");
        else
            result.append("0");
        sum >>= 1;
    }
    
    return result;
}