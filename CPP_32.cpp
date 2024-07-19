```cpp
double find_zero(vector<double> coeffs){
    double x = -coeffs[1] / (2*abs(coeffs[1]));
    double poly(double v, double x) {
        return coeffs[0] + coeffs[1]*x + coeffs[2]*pow(x, 2);
    }
    return poly(0, x);
}