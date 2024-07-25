Here is the completed code:

bool is_simple_power(int x, int n){
    double log_result = log((double)x) / log((double)n);
    return (log_result == round(log_result));
}