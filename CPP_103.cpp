#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum / ((m-n)+1);
    int rounded_avg = floor(avg + 0.5);
    string result = "";
    while(rounded_avg > 0){
        if(rounded_avg & 1) result += "1";
        else result += "0";
        rounded_avg >>= 1;
    }
    reverse(result.begin(), result.end());
    return result;
}