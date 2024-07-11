double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    
    if (b == 0)
       return 0;
    
    return -a / b;
}