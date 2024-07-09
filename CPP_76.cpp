Here's the solution:

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == int(y)) && (abs(y - x) < 1e-9);
}