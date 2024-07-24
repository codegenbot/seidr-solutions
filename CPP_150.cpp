int x_or_y(int n, int x, int y) {
    if (!isPrime(n)) { 
        if (x < y || !isPrime(x) || !isPrime(y))
            return 0; 
    }
    return x;
}