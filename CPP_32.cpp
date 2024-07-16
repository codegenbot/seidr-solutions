double find_zero(vector<double> xs){
    if (xs.size() % 2 != 0) {
        return -1; // Invalid input
    }

    double zero_point = -1;
    for (double x = -1000; x <= 1000; x += 0.001) {
        if (poly(xs, x) == 0) {
            zero_point = x;
            break;
        }
    }

    return zero_point;
}