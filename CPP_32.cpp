vector<double> coeffs = {1, -6, 11, -6};

double poly(vector<double> xs, double x){
    double result = 0;
    
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    
    return result;
}

double find_zero(vector<double> xs){
    double x = 1.0;
    double tol = 1e-6; // tolerance for finding zero
    int max_iter = 1000; // maximum number of iterations
    
    for(int i=0; i<max_iter; i++){
        double f = poly(xs, x);
        
        if(abs(f) < tol){
            return round(x, 2);
        }
        
        x -= f / poly(xs, x); // Newton's method
    }
    
    return -1.0; // not found
}