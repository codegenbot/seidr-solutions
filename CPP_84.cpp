#include<stdio.h>
#include<string>
using namespace std;

string solve(int N){
    int sum = 0;
    while(N > 0) {
        if((N & 1) == 1)
            sum++;
        N >>= 1;
    }
    string result = "";
    while(sum > 0) {
        if(sum % 2 == 1)
            result.insert(0, "1");
        else
            result.insert(0, "0");
        sum /= 2;
    }
    return result;
}