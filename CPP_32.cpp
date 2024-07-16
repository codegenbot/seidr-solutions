double find_zero(vector<double> xs){
    double root = 0;
    if (xs.size() == 2) {
        root = -xs[0] / xs[1];
    }
    return root;
}