int x_or_y(int n, int x, int y) {
    if (isPrime(n)) {
        return x + y;  
    } else {
        return x * y;   
    }
}