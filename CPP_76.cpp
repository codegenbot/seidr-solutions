bool is_simple_power(int x, int n) {
    if (x == 1) {
        return true;
    }
    int power = log(x) / log(n);
    return pow(n, power) == x;
}