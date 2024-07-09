int largest_divisor(int n) {
    int i = n - 1;
    while (i > 0) {
        if (n % i == 0) {
            return i;
        }
        i--;
    }
    return 0;
}