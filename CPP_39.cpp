int a = 1, b = 1, c;
    int count = 2;
    while (count < n) {
        c = a + b;
        a = b;
        b = c;
        if (is_prime(c)) {
            count++;
        }
    }
    return c;
}