bool is_simple_power(int x, int n) {
    int log_val = log(x) / log(n);
    return (n == pow(n, log_val));
}