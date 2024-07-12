Here's the solution:

bool is_simple_power(int x, int n) {
    double log_x = log((double)x);
    double log_n = log((double)n);

    if (fmod(log_x, log_n) == 0)
        return true;
    else
        return false;
}