Here is the completed code:

bool is_simple_power(int x, int n) {
    double log_val = log((double)x) / log((double)n);
    return round(log_val) == log_val;
}