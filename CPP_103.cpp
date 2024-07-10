#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum / (m - n + 1);
    avg = (int)round(avg);
    string res = "";
    while(avg > 0.5){
        if(avg == (int)avg) res.push_back('1');
        else res.push_back('0');
        avg /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}