Here is the completed code:

bool is_simple_power(int x, int n) {
    double log_value = log(x) / log(n);
    return (log_value == round(log_value));
}