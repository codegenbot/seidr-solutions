string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum / (m-n+1);
    avg = floor(avg);
    string result = "";
    while(avg > 0){
        if(avg & 1) result.push_back('1');
        else result.push_back('0');
        avg >>= 1;
    }
    return result;
}