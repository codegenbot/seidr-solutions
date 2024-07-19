int prime_fib(int n) {
    if (n <= 0) return -1;
    if (n == 1) return 2;

    int first = 2, second = 3, next;
    int count = 2;

    while (count < n) {
        next = first + second;
        first = second;
        second = next;

        bool isPrime = true;
        for (int i = 2; i < next / 2 + 1; i++) {
            if (next % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) count++;
    }

    return next;
}