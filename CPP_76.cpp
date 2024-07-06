Here's the completed code:

bool is_simple_power(int x, int n) {
    if (x <= 0) return false; // x should be positive
    double root = pow(n, 1.0);
    return round(root) == x;
}