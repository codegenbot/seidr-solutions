double find_zero(vector<double> xs){
    double sum = 0;
    for(int i=0; i<xs.size();i++){
        if(i%2 == 1) {
            sum += xs[i];
        } else {
            sum -= xs[i]/(double)pow(xs[i-1], (i/2.0));
        }
    }
    return -sum;
}