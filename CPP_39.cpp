```
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    bool isPrime(int num);
    while (true) {
        if (isPrime(b))
            count++;
        if (count == n)
            return b;
        if (b < 2) break;
        a += b;
        b = a - b;
    }
    return b;
}