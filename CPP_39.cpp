```cpp
int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    while (true) {
        if (isPrime(b))
            count++;
        if (count == n)
            return b;
        a += b;
        b = a - b;
    }
}