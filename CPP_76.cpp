bool is_simple_power(int x, int n) {
    int power = log(x) / log(n);
    return pow(n, power) == x;
}