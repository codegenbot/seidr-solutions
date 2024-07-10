Here's the solution:

bool is_simple_power(int x, int n) {
    if (n == 0)
        return false;
    double log_x = log((double)x);
    double log_n = log((double)n);
    
    if (fmod(log_x, log_n) == 0.0)
        return true;
    else
        return false;
}