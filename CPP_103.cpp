string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum / (m - n + 1);
    int r = labs((int)round(avg));
    string res = "";
    while(r > 0){
        res = (r & 1) ? "1" + res : "0" + res;
        r >>= 1;
    }
    return res;
}