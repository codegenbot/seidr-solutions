Here's the completed code:

bool is_simple_power(int x, int n) {
    double log_value = log(double(x)) / log(n);
    return round(log_value) == log_value;
}