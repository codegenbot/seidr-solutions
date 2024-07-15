bool is_simple_power(int x, int n) {
    if(x <= 0 || n <= 0) return false;
    double power = log(x) / log(n);
    return (std::abs(power - (int)power) < 1e-9);
}