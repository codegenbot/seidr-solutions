int modp(int n, int p) {
    std::cin >> n >> p; // Read input from user

    if (p == 1) return 0;

    int result = 1;
    n = n % p;

    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * n) % p;
        }
        n = (n * n) % p;
    }

    return result;
}