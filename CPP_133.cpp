double sum_squares(std::vector<double> lst) {
    double sum = 0;
    for(double x : lst){
        int ceiling = ceil(x);
        sum += pow(ceiling, 2);
    }
    return sum;