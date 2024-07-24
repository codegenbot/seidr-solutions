Here's the completed code:

bool is_simple_power(int x, int n) {
    double log_val = log(x) / log(n);
    return (log_val == round(log_val));
}