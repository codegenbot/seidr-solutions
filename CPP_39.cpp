int a = 1, b = 1, c = 0, count = 2;
    while (count < n) {
        c = a + b;
        a = b;
        b = c;
        if (c > 1 && isPrime(c)) {
            count++;
        }
    }
    return c;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}