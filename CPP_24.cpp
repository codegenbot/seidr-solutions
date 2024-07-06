int largest_divisor(int n) {
    for (int i = n / 2; i > 0; --i)
        if (n % i == 0)
            return i;
    return 1;
}