```cpp
double poly(vector<double> coefficients, double x) {
    double result = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double>& coeffs, vector<double>& xs) {
    double sum = 0;
    coeffs.clear();
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            coeffs.push_back(xs[i] / xs[0]);
        }
    }
    double x = -coeffs[0];
    return poly(coeffs, x);
}