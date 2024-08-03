double find_zero(vector<double> xs){
    int n = xs.size();
    if (n % 2 != 0) return -1; // Check if the number of coefficients is even
    double x = -xs[1] / (2*xs[0]);
    return round(x, 2);
}