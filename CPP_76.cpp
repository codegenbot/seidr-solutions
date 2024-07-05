bool is_simple_power(int x, int n) {
    if (x < 1 || n < 1) return false; // Check for valid input values
    if (n == 1) return x == 1;
    int power = 1;
    while (power <= x / n) {
        power *= n;
    }
    return power == x;
}