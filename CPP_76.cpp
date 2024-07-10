Here is the completed code:

bool is_simple_power(int x, int n) {
    double root = pow(n, 1.0);
    return round(root) == x;
}