#include <algorithm>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum / (m - n + 1);
    avg = floor(avg + 0.5); 
    string res = "";
    int intAvg = static_cast<int>(avg); // round and convert to int
    while(intAvg > 0){
        if(intAvg & 1) res.push_back('1');
        else res.push_back('0');
        intAvg >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}