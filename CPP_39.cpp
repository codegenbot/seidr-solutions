int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        if (i == n)
            return b;
        int temp = a + b;
        a = b;
        b = temp;
        if (!is_prime(b))
            continue;
    }
}

bool is_prime(int x) {
    if (x <= 1)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}