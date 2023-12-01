int x_or_y(int n, int x, int y) {
    int isPrime = 1;
    
    // Check if n is a prime number
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    
    // Return x if n is prime, otherwise return y
    if (isPrime) {
        return x;
    } else {
        return y;
    }
}