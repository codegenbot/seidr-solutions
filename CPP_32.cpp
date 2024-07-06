double find_zero(vector<double> xs){
    double left = xs[0];
    double right = xs[xs.size()-1];
    return (left + right) / 2.0;
}