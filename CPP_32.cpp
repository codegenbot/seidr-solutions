double poly(vector<double> coeffs, double x){
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double abs(double x){
    return x >= 0 ? x : -x;
}

double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    double c = xs[2];
    double discriminant = b * b - 4 * a * c;
    double sqrt_discriminant = sqrt(abs(discriminant));
    double x1 = (-b + sqrt_discriminant) / (2 * a);
    double x2 = (-b - sqrt_discriminant) / (2 * a);
    return abs(x1) < abs(x2) ? x1 : x2;
}