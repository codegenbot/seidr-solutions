vector<int> collatz{ n };
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
            if (n % 2 != 0) {
                collatz.push_back(n);
            }
        }
    }
    sort(collatz.begin(), collatz.end());
    return collatz;
}