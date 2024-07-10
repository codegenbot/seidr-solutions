Here is the completed code:

bool is_simple_power(int x, int n) {
    if (x < 1)
        return false;
    double y = pow(n, log(x) / log(n));
    return y == x;
}