if (x == 1) return true;
    if (n == 1) return false;
    
    double root = pow(x, 1.0 / n);
    return (pow((int)root, n) == x);
}