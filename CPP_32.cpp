double find_zero(vector<double> xs){
    double root;
    if(xs.size() % 2 != 0){
        return 0.0;  // Return 0 if odd number of coefficients
    }
    
    if(xs[xs.size()-1] == 0){
        return 0.0;  // Return 0 if largest coefficient is zero
    }
    
    if(xs.size() == 2){
        return -xs[0]/xs[1]; // x = -a/b
    }
    
    for(int i = -1000; i <= 1000; ++i){
        if(poly(xs, i) == 0){
            root = i;
            break;
        }
    }
    
    return root;
}