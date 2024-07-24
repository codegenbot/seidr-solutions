double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    
    if (a == 0){
        return 0;
    }
    else{
        return -b/a;
    }
}