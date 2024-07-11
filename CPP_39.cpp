```cpp
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;

}

int prime_fib(int n) {
    int a = 0, b = 1, fib = 1;
    while (fib <= n) {
        if (isPrime(fib)) {
            return fib;
        }
        a = b;
        b = fib;
        fib = a + b;
    }
    return -1; // not found
}