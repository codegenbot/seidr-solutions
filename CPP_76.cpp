bool is_simple_power(int x, int n) {
    if (n == 0)
        return false;

    double log_value = log((double)x) / log((double)n);

    return floor(log_value + 0.5) == log_value;
}