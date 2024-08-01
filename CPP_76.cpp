Here's the solution:

bool is_simple_power(int x, int n) {
    if (n == 0) return false; // base case: n cannot be zero
    double y = pow(n, round(log(x) / log(n))); // calculate y as n^k where k is the integer part of log(x)/log(n)
    return y == x; // check if y equals x
}