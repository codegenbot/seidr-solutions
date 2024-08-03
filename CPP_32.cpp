double find_zero(vector<double> xs){
    double left = 0;
    double right = 1;
    
    while (right - left > 1e-9) {
        double mid = (left + right)/2;
        
        double f_left = poly(xs, left);
        double f_right = poly(xs, right);
        double f_mid = poly(xs, mid);
        
        if (f_left * f_mid < 0) {
            right = mid;
        } else if (f_mid * f_right < 0) {
            left = mid;
        } else {
            return round(mid, 2);
        }
    }
    
    return round(left, 2);
}