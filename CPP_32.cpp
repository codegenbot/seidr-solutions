double find_zero(vector<double> xs){
    double sum = 0;
    for(int i=1; i<xs.size();i++){
        if(xs[i] != 0) {
            sum = -xs[i]/xs[0];
            return sum;
        }
    }
    return -1.0; // or any other default value you want
}