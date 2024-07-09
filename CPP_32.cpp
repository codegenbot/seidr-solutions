double find_zero(std::vector<double> xs) {
    if(xs.size() % 2 != 0) return -1; 
    double root = xs[0];
    for(int i = 1; i < xs.size(); i += 2){
        root -= xs[i]/(2*xs[i-1]);
    }
    return std::round(root);
}