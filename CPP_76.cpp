if(x <= 0 || n <= 0) {
        return false;
    }
    
    double p = log(x) / log(n);
    
    return (ceil(p) == floor(p));
}