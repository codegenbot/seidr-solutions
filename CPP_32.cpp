```cpp
double find_zero(vector<double> coefficients) {
    double x = -coefficients[1]/(2*abs(coefficients[1]));
    return poly(coefficients, x);
}

double poly(vector<double> coefficients, double x) {
    double sum = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        sum += coefficients[i] * pow(x, i);
    }
    return sum;
}