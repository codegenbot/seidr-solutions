double find_zero(vector<double> xs){
    double sum = 0;
    for(int i=0; i<xs.size();i++){
        if(i % 2 == 1) continue;
        double x = -xs[i] / xs[0];
        sum = poly(vector<double>(xs.begin(), xs.end()),x);
        if(abs(sum) < 0.00001) return x;
    }
    return -1; //no solution
}