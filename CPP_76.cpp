if (x == 1) return true;
    
    double root = pow(x, 1.0 / n);
    int intRoot = (int)root;
    
    return (pow(intRoot, n) == x);
}