#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum / (m - n + 1);
    int rounded = lround(avg);
    string bin = "";
    while(rounded > 0){
        if(rounded & 1) bin.insert(0, "1");
        else bin.insert(0, "0");
        rounded >>= 1;
    }
    return bin;
}