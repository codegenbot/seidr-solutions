double find_zero(vector<double> xs){
    double x = 1;
    double tol = 1e-6; // tolerance for finding zero
    int max_iter = 1000; // maximum number of iterations
    
    for(int i=0; i<max_iter; i++){
        double f = poly(xs, x);
        
        if(abs(f) < tol){
            return round(x, 2);
        }
        
        x -= f / poly(vector<double>(xs.begin(), xs.end()), x); // Newton's method
    }
    
    return -1.0; // not found
}