bool is_simple_power(int x, int n){
    double log_value = log((double)x) / log(n);
    return floor(log_value + 0.5) == log_value;
}