string rounded_avg(int n,int m){
    if(n>m) return "-1";
    double sum=0.0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    int avg = floor(sum/(double)(m-n+1));
    string res="";
    while(avg>0){
        res += (avg&1)? '1' : '0';
        avg >>= 1;
    }
    return res;
}