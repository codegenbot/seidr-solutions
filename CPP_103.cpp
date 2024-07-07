#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum / (m-n+1);
    avg = floor(avg + 0.5);
    string result = "";
    while(avg > 0){
        if(avg & 1) result = "1" + result;
        else result = "0" + result;
        avg /= 2;
    }
    return result;
}