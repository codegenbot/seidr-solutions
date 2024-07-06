bool is_simple_power(int x, int n) {
    if (n == 0) return false; // base case: 0^any number is undefined
    double y = pow(n, round(log(x)/log(n))); // calculate the power of n that should equal x
    return y == x;
}