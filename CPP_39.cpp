int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    while (true) {
        if ((b > n) || (count == n)) break;
        if (isPrime(b)) return b;
        a += b; b = a - b;
        count++;
    }
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}