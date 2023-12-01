int x_or_y(int n, int x, int y) {
    bool isPrime = true;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        return x;
    } else {
        return y;
    }
}