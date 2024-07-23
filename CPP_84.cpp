#include <string>

string solve(int N){
    int sum = 0;
    while(N > 0){
        int bit = N & 1;
        if(bit) sum++;
        N >>= 1;
    }
    string result = "";
    while(sum > 0){
        result = (sum % 2 == 1)? "1" + result : "0" + result;
        sum /= 2;
    }
    return result;
}