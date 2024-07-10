bool is_simple_power(int x, int n) {
    if (n == 0) return false; // Edge case: n cannot be zero.
    double y = pow(n, round(log(x) / log(n))); // Calculate the power of n that should equal x.
    return (y == x); // Check if the calculated power equals x.
}