#include <string>

string solve(int N){
    int sum = 0;
    while(N > 0) {
        sum += (N & 1);
        N >>= 1;
    }
    string result = "";
    while(sum > 0) {
        if(sum % 2 == 0)
            result = "0" + result;
        else
            result = "1" + result;
        sum /= 2;
    }
    return result;
}