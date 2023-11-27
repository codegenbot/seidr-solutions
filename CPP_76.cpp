bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    int power = 0;
    while (pow(n, power) < x) {
        power++;
    }
    
    return pow(n, power) == x;
}