int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            n /= i;
        } else {
            i++;
        }
    }
    return n;
}