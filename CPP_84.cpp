#include <string>

string solve(int N) {
    int sum = 0;
    string result = "";

    while(N > 0) {
        int remainder = N % 2;
        if (remainder == 1)
            sum++;
        
        if (N > 1)
            result = to_string(remainder) + result;
        N /= 2;
    }
    
    return result;
}