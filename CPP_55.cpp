int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    assert(fib(12) == 144);
    // Add any additional testing or output here
    return 0;
}