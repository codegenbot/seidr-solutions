double poly(double x, vector<double> xs){
    double result = xs[0];
    for (int i = 1; i < xs.size(); i += 2) {
        result += coeffs[i/2] * pow(x - xs[0], i);
    }
    return result;
}