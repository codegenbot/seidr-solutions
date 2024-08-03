bool is_simple_power(int x, int n) {
    if (n == 1) {
        return (x == 1);
    }
    
    double root = pow(x, 1.0 / n);
    
    return (pow(static_cast<int>(root), n) == x);
}