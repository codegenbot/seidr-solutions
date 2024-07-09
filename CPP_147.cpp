int count = 0;
    for (int i = 1; i <= n; ++i) {
        int val = i * i - i + 1;
        if (val % 3 == 0) {
            count += i - 1;
        }
    }
    return count;
}