#include <string>
string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) {
        sum += i;
    }
    double avg = (double)sum / ((m-n)+1);
    avg = floor(avg + 0.5); // round to the nearest integer
    string res = "";
    while(avg > 0) {
        res = (avg & 1)? "1" + res : "0" + res;
        avg >>= 1;
    }
    return res;
}