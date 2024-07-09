double find_zero(vector<double> xs){
    double left = 0;
    double right = 1;

    while (abs(left - right) > 1e-9) {
        double mid = (left + right) / 2.0;
        if (poly(xs, left) * poly(xs, mid) < 0)
            right = mid;
        else
            left = mid;
    }

    return left;
}