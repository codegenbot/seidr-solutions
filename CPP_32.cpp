double find_zero(vector<double> xs){
    int n = xs.size();
    if (n % 2 == 1) {
        return -1; // invalid input: odd number of coefficients
    }
    
    double x = 0;
    for (int i = 1; i < n; i += 2) {
        x = (-xs[i] / xs[0]) + x;
    }
    
    return x;
}