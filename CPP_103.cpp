#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    long sum = 0;
    for(long i=n; i<=m; ++i)
        sum += i;
    double average = (double)sum/(m-n+1);
    average = floor(average + 0.5); // round to the nearest integer
    string res = "";
    while(average > 0){
        if(average & 1) res += '1';
        else res += '0';
        average >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}