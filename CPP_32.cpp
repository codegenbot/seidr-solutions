double find_zero(vector<double> xs){
    double sum = 0;
    double product = 1;
    
    for (int i = 0; i < xs.size(); i++) {
        if (i % 2 == 1) {
            sum += xs[i] * product;
        } else {
            product *= xs[i];
        }
    }
    
    return -sum / product;
}