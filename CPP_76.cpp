bool is_simple_power(int x, int n){
    double log_value = log((double)x)/log((double)n);
    return (int)log_value == log_value;
}