```cpp
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
    double avg = (double)sum / (m - n + 1);
    int rounded = floor(avg + 0.5);
    string res = "";
    while(rounded > 0){
        res += (rounded & 1) ? "1" : "0";
        rounded >>= 1;
    }
    std::reverse(res.begin(), res.end());
    return res;
}