Here is the completed code:

bool is_simple_power(int x, int n) {
    double log_val = log((double)x) / log((double)n);
    return std::abs(log_val - round(log_val)) < 1e-9;
}