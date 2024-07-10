#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

string rounded_avg(int n,int m){
    if(n>m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) {
        sum += i;
    }
    double avg = (double)sum / (m-n+1);
    avg = floor(avg);
    string res = "";
    while(avg > 0) {
        if(avg & 1) res += '1';
        else res += '0';
        avg /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}