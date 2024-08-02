#include <bits/stdc++.h>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum / (m - n + 1);
    avg = floor(avg + 0.5);
    string bin = "";
    while(avg > 0){
        if(avg & 1) bin.insert(0,"1");
        else bin.insert(0,"0");
        avg >>= 1;
    }
    return bin;
}