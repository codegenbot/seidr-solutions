if(x == 1) return true;
    if(n == 1) return false;
    
    double power = log(x) / log(n);
    return (power == int(power));
}