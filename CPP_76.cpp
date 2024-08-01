Here's the completed code:

bool is_simple_power(int x, int n) {
    return (int)pow(n, log(n) / log(x)) == 1;
}