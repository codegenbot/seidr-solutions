double find_zero(vector<double> coeffs, int ncoeff) {
    double x = -coeffs[1]/(2*abs(coeffs[1]));
    return poly(coeffs, x, ncoeff);
}