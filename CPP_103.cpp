#include <bits/stdc++.h>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum / (m - n + 1);
    avg = floor(avg + 0.5);
    string res = "";
    while(avg > 0){
        if(avg & 1) res.push_back('1');
        else res.push_back('0');
        avg /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    cout << rounded_avg(5, 5) << endl;
    return 0;
}