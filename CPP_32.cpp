double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1;
    double root = (-1 * xs[1]) / (2 * xs[0]);
    return std::round(root);
}