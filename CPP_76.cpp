if (n == 1) {
        return x == 1;
    }
    
    double root = pow(x, 1.0/n);
    return (pow(int(root + 0.5), n) == x);
}