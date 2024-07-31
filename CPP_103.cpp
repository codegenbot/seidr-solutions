#include<stdio.h>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

string rounded_avg(int n,int m){
    if(n>m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum/(m-n+1);
    avg = floor(avg + 0.5); // round to the nearest integer
    string binary = "";
    while(avg > 0){
        if((int)avg & 1) binary.push_back('1');
        else binary.push_back('0');
        (int)avg = (int)avg / 2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}