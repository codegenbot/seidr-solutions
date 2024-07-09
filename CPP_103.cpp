#include <string>

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum / (m-n+1);
    int rounded = floor(avg + 0.5);
    string result;
    while(rounded > 0){
        if(rounded & 1) result.push_back('1');
        else result.push_back('0');
        rounded >>= 1;
    }
    reverse(result.begin(), result.end());
    return result;