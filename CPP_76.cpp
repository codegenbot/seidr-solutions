bool is_simple_power(int x, int n) {
    return (int)pow(n, 1.0 / log(n) * log(x)) == 1;
}