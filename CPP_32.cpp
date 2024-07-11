double find_zero(vector<double> xs){
    double left = -1000000;
    double right = 1000000;
    
    while (right - left > 1e-6) {
        double mid = (left + right) / 2;
        if (poly(xs, left) * poly(xs, mid) <= 0)
            right = mid;
        else
            left = mid;
    }
    
    return left;
}