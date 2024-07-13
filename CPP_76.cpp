Here's the solution:

bool is_simple_power(int x, int n) {
    double log_x = log(x);
    double log_n = log(n);
    return (fmod(log_x, log_n) == 0);
}