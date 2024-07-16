if (x <= 0 || n <= 0)
        return false;
    
    double res = pow(x, 1.0/n);
    return (pow(ceil(res), n) == x || pow(floor(res), n) == x);
}