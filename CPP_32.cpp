double find_zero(vector<double> xs){
    int n = xs.size();
    double sum = xs[n/2];
    for(int i=1; i<n/2; i++){
        sum -= xs[i]/(i*1.0);
    }
    return -sum;
}