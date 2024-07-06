#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string res="";
    while(avg > 0) {
        if(avg & 1)
            res = "1" + res;
        else
            res = "0" + res;
        avg >>= 1;
    }
    return res.length() == 0 ? "-1" : res;
}