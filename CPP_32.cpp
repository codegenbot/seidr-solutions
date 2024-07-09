double find_zero(vector<double> xs) {
    int n = xs.size();
    double coeffs[100];
    for (int i = 0; i < n; i++) {
        coeffs[i] = xs[i];
    }
    double poly(double c, double s) { return c + s; }
    double zero = 1;
    for(int i=0; i<n; i++){
        if(i%2==0){
            zero=poly(zero, -coeffs[i]/coeffs[(i+1)%n]);
        }
    }
    return zero;
}