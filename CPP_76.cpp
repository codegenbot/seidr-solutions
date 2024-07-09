if (x <= 0 || n <= 0) {
        return false;
    }
    
    if (x == 1) {
        return true;
    }
    
    double root = pow(x, 1.0 / n);
    
    return (pow((int)root, n) == x);
}