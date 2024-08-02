bool is_simple_power(int x, int n){
    double log_value = log((double)x) / log((double)n);
    return (log_value == round(log_value));
}