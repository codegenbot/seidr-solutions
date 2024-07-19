if (x < 1) return false;
    if (n < 2) return false;
    
    double power = log(x) / log(n);
    return ((int)power == power);
}