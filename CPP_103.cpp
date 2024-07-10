string rounded_avg(int n,int m){
    if(n > m) return "-1";
    double avg = (double)(m + n)/2;
    string res = "";
    while(avg > 0){
        if(avg >= 1) {res.push_back('1'); avg--;}
        else res.push_back('0');
        avg /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}