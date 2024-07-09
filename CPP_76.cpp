bool is_simple_power(int x, int n) {
    double temp = pow(n, ceil(log(x)/log(n)));
    return temp == x;
}