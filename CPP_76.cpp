if(x <= 0 || n <= 0) return false;
    
    double root = pow(x, 1.0/n);
    int intPart = static_cast<int>(root);
    
    return pow(intPart, n) == x;
}