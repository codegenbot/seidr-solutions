if (x == 1) {
        return true;
    }
    
    double root = pow(x, 1.0 / n);
    int root_int = (int)root;
    
    return pow(root_int, n) == x;
}