bool is_simple_power(int x, int n) {
    if (n == 1)
        return true;

    double log_x = log(x);
    double log_n = log(n);

    if (fmod(log_x, log_n) != 0.0)
        return false;

    return true;
}