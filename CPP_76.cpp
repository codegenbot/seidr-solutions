```cpp
bool is_simple_power(int x, int n) {
    double log_x = log(x);
    double log_n = log(n);
    
    return (log_x / log_n) == round(log_x / log_n);
}