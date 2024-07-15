bool is_simple_power(int x, int n) {
    return (x > 0 && n > 0 && log(x) / log(n) == (int)(log(x) / log(n)));
}