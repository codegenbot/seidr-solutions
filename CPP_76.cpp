bool is_simple_power(int x, int n) {
    if (n == 1)
        return true;

    double log_val = log(x) / log(n);
    return floor(log_val + 0.5) == log_val;
}