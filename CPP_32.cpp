double find_zero(vector<double> xs){
    double sum = 0;
    double coeff = xs[0];
    vector<double> coeffs;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            sum += xs[i] / coeff;
            coeffs.push_back(xs[i]);
        }
    }
    return -sum / coeff;
}

double poly(vector<double> coeffs, double x){
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i]*pow(x,i);
    }
    return result;
int main() {
    vector<double> xs = {1.0, -3.0, 2.0};
    double solution = find_zero(xs);
    assert (abs(poly({1.0, -3.0, 2.0}, solution))< 1e-3); 
    return 0;
}