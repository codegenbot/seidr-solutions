int prime_fib(int n) {
    int a = 0, b = 1, i = 2, count = 0;
    while (count < n) {
        if (isPrime(b)) {
            count++;
            int temp = a;
            a = b;
            b = temp + b;
        }
        i++;
    }
    return a;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}