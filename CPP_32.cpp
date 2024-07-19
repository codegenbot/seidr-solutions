double find_zero(vector<double> xs){
    double result = 0.0;
    if (xs.size() == 2) {
        result = -xs[0] / xs[1];
    }
    return result;
}