Here's the completed code:

bool is_simple_power(int x, int n) {
    if (n == 0)
        return false;

    double res = pow(n, round(log(x) / log(n)));

    return res == x;
}