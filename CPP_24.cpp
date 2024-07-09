int largest_divisor(int n) {
    int i = 1;
    while (i * i <= n) {
        if (n % i == 0)
            return n / i;
        ++i;
    }
    return 1; 
}