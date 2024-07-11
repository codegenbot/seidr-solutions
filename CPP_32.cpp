double find_zero(vector<double> xs){
    double zero_point;
    if (xs.size() % 2 != 0) {
        return 0;
    }
    
    for (int i = 0; i < xs.size(); i++) {
        if (xs[i] != 0) {
            zero_point = i * -1;
            break;
        }
    }
    
    return zero_point;
}