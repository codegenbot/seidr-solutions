bool is_simple_power(int x, int n) {
    double log_x = log(x) / log(n);
    return floor(log_x + 0.5) == log_x;
}