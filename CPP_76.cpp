if (x < 1) return false;
    if (x == 1) return true;
    
    double root = pow(x, 1.0 / n);
    
    return (pow(round(root), n) == x);
}