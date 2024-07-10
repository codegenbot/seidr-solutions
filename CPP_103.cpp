string rounded_avg(int n,int m){
    if(n > m) return "-1";
    double sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    int avg = (int)round(sum/(double)(m-n+1));
    string res = "";
    while(avg > 0){
        if(avg & 1) res.push_back('1');
        else res.push_back('0');
        avg >>= 1;
    }
    return res;
}