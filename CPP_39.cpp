int prime_fib(int n) {
    int a = 0, b = 1, count = 1;
    while (count < n) {
        if (is_prime(b)) {
            if (count == n)
                return b;
            count++;
            swap(a, b);
            b += a;
        } else
            b += a;
    }
    return -1; // not found
}

bool is_prime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}