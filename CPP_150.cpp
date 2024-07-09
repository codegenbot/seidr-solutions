int x_or_y(int n, int x, int y) {
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime ? y : x;
}