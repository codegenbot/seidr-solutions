#include<stdio.h>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum / (m-n+1);
    avg = floor(avg);
    string res = "";
    while(avg > 0){
        int avgInt = avg; 
        if(avgInt & 1) res.push_back('1');
        else res.push_back('0');
        avgInt /= 2;
        avg = avgInt;
    }
    reverse(res.begin(), res.end());
    return res;
}