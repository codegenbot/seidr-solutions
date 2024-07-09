#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    long sum = 0;
    for(long i=n; i<=m; i++) sum += i;
    double avg = (double)sum / (m - n + 1);
    int rounded_avg = floor(avg+0.5); // rounding to the nearest integer
    string res = "";
    while(rounded_avg > 0){
        res = char(rounded_avg % 2) + res; // convert to binary
        rounded_avg /= 2;
    }
    reverse(res.begin(),res.end());
    return res;
}