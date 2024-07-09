double find_zero(vector<double> xs){
    double sum = 0;
    for(int i=1; i < xs.size(); i+=2) {
        sum += xs[i] / (double)i * pow(-1, i);
    }
    return -sum;
}