double find_zero(vector<double> xs) {
    vector<double> coeffs(xs);
    coeffs.push_back(-xs[1]/(2*xs[0]));
    double x = -coeffs[1]/(2*coeffs[0]);
    return poly(coeffs, x) == 0 ? x : 0;
}

double poly(vector<double> coeffs, double x) {
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++) {
        if(i%2==0)
            result += coeffs[i] * pow(x, (int)i/2);
        else
            result -= coeffs[i] * pow(x, (int)(i-1)/2);
    }
    return result;
}