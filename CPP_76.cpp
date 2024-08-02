bool is_simple_power(int x, int n) {
    double power = log(x) / log(n);
    return floor(power + 0.5) == power;
}