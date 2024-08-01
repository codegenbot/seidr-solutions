bool is_simple_power(int x, int n) {
    double y = pow(n, round(log(x)/log(n)));
    return y == x;
}