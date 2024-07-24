string rounded_avg(int n,int m){
    if(n > m) return "-1";
    double sum = 0;
    int count = 0;
    for(int i=n; i<=m; i++){
        sum += i;
        count++;
    }
    int avg = round(sum / count);
    string res = "";
    while(avg > 0){
        if(avg & 1) res = "1" + res;
        else res = "0" + res;
        avg /= 2;
    }
    return res;
}