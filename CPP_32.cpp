double find_zero(vector<double> xs){
    double left = xs[0];
    double right = xs.back();
    
    while (abs(right - left) > 1e-9) {
        double mid = (left + right) / 2;
        double poly_val = poly(xs, mid);
        
        if (poly_val < 0)
            left = mid;
        else
            right = mid;
    }
    
    return left;
}