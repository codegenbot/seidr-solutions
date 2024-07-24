string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i = n; i <= m; i++) sum += i;
    int avg = (int)round((double)sum / (m - n + 1));
    string binary = "";
    while(avg > 0){
        if(avg % 2 == 0) binary.insert(0, "0");
        else binary.insert(0, "1");
        avg /= 2;
    }
    return binary;
}