double find_zero(vector<double> xs) {
    vector<double> coeffs(xs.size());
    for(int i = 0; i < xs.size(); ++i) {
        coeffs[i] = xs[(xs.size()-1)-i];
    }
    double x = -coeffs[1]/(2*coeffs[0]);
    return poly(coeffs, x);
}

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i]*pow(x,(coeffs.size()-1)-i);
    }
    return result;
}