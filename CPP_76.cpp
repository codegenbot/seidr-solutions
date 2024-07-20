Here's the completed code:

bool is_simple_power(int x, int n) {
    double log_x = log((double)x);
    double log_n = log((double)n);

    if (fmod(log_x, log_n) == 0 && x > 1)
        return true;
    else
        return false;
}