Here is the completed code:

bool is_simple_power(int x, int n) {
    return round(pow(n, 1.0 / log2(x))) == n;
}