Here is the completed code:

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum / (m-n+1);
    int rounded_avg = floor(avg);
    string res = "";
    while(rounded_avg > 0){
        res += (rounded_avg & 1) ? "1" : "0";
        rounded_avg >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}