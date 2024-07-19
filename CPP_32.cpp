```cpp
double poly(vector<double> coeffs, double x) {
    double sum = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> coeffs){
    double x = -coeffs[1] / (2*abs(coeffs[1]));
    return poly(coeffs,x);
}