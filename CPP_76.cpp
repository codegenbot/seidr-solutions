bool is_simple_power(int x, int n) {
    if (n == 1) return x == 1;
    if (n == 0) return x == 1;
    if (x == 1) return true;
    
    double res = log(x) / log(n);
    return (res - (int)res) == 0;
}