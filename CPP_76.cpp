bool is_simple_power(int n, int x) {
    if (n == 1) {
        return x == 1;
    }
    int power = 1;
    while (power < x) {
        power *= n;
    }
    return power == x;
}