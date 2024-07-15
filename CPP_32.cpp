
double poly(const vector<double>& coeffs, double x){
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    
    if(a == 0) return -1; // handle division by zero
    
    return -b/a;
}

int main(){
    vector<double> coeffs = {1, -1, -6}; // example coefficients
    
    double solution;
    solution = find_zero(coeffs);
    assert (abs(poly(coeffs, solution)) < 1e-3); // assert polynomial value near zero
    
    return 0;
}