bool is_simple_power(int x, int n) {
    if (n == 1) {
        return false;
    }
    
    int power = log(x) / log(n);
    int result = pow(n, power);
    
    return result == x;
}