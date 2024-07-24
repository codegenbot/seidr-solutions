double find_zero(vector<double> coefficients) {
    vector<double> xs = {coefficients[2], coefficients[1], coefficients[0]}; // declare coeffs as vector of doubles
    double x = -xs[1] / (2*xs[0]);
    return x;
}

double poly(vector<double> coeffs, double x) {
    double result = 0.0; 
    for(int i=0;i<=coeffs.size()-1;i++){
        result += coeffs[i]*pow(x,i); // implement your own poly function here
    }
    return result;
}