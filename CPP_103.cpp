string rounded_avg(int n,int m){
    if(n > m) return "-1";
    long sum = 0;
    for(long i=n; i<=m; i++){
        sum += i;
    }
    long avg = (long)round(sum / (double)(m-n+1));
    string res = "";
    while(avg > 0){
        if(avg & 1) res.push_back('1');
        else res.push_back('0');
        avg >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}