#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum / ((n + m) * 1.0);
    int ravg = floor(avg); // round down
    string res = "";
    while(ravg > 0){
        if(ravg & 1) res.push_back('1');
        else res.push_back('0');
        ravg >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}