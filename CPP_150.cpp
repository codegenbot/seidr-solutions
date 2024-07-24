int x_or_y(int n, int x, int y) {
    if (!isPrime(n)) { 
        if (x < y || (x == y && n > 2))
            return 0; 
    }
    return x;
}