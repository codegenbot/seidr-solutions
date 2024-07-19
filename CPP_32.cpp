double find_zero(vector<double> xs){
    double sum = 0;
    for (int i = 2; i < xs.size(); i += 2) {
        sum -= xs[i] / xs[1];
    }
    return -sum / xs[1];
}