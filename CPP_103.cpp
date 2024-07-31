string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum / (m - n + 1);
    avg = floor(avg);
    string bin = "";
    while(avg > 0){
        if(avg & 1) bin.push_back('1');
        else bin.push_back('0');
        avg >>= 1;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}