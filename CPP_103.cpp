Here is the completed code:

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    long sum = 0;
    for(long i = n; i <= m; ++i) sum += i;
    double avg = (double)sum / ((m - n + 1));
    int rounded = lround(avg);
    string res = "";
    while(rounded > 0){
        res = (rounded & 1) ? "1" + res : "0" + res;
        rounded >>= 1;
    }
    return res;
}