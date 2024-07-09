string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum / (m - n + 1);
    int rounded = floor(avg);
    string binary = "";
    while(rounded > 0){
        if(rounded % 2 == 0) binary.push_back('0');
        else binary.push_back('1');
        rounded /= 2;
    }
    reverse(binary.begin(),binary.end());
    return binary;
}