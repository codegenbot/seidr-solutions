int x_or_y(int n, int x, int y) {
    if (!isPrime(n)) { 
        if (x <= 0 || y < x)
            return 0; 
    }
    return x;
}