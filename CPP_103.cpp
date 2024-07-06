string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum / (m - n + 1);
    int ravg = floor(avg + 0.5);
    string binary = "";
    while(ravg > 0){
        if(ravg % 2 == 0) binary.push_back('0');
        else binary.push_back('1');
        ravg /= 2;
    }
    return binary;
}