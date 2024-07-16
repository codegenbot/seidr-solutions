if (x == 1) return true;
    
    double root = pow(x, 1.0 / n);
    
    return fmod(root, 1) == 0;
}