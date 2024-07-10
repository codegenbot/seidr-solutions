Here is the solution:

bool is_simple_power(int x, int n) {
    return pow(n, 1.0 / log(n) * log(x)) == round(pow(n, 1.0 / log(n) * log(x)));
}