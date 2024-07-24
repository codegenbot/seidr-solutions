double find_zero(vector<double> xs){
    double a = xs[0];
    double b = 0;
    for(int i=1; i<xs.size();i++){
        if(i%2==0) b+=xs[i]*pow(xs.back(),(i-1)/2);
        else a+=xs[i]/fact((i-1)/2);
    }
    return -b/a;
}

int fact(int n){
    int res = 1;
    for(int i=1; i<=n; i++) res*=i;
    return res;
}