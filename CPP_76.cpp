Here's the solution:

bool is_simple_power(int x, int n){
    double log_x = log(x) / log(n);
    return round(log_x) == log_x;
}