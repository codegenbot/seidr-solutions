double find_zero(vector<double> xs){
    double sum = 0;
    double root = -xs[1]/(2*xs[0]);
    
    if (poly(xs,root) < 0)
        return root;
    else
        return -1.0; // or throw an exception or handle it in any other way you want
}