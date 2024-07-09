int largest_divisor(int n) {
    for (int i = 1; i * i <= n; ++i)
        if (n % i == 0)
            return n / i;
    return -1;
}