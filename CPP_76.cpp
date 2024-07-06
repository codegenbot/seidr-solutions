Here's the completed code:

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return floor(y + 0.5) == x;
}