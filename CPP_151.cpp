long long result = 0;
    for (float n : lst) {
        if (n > 0 && n == (int)n && (int)n % 2 != 0) {
            result += n * n;
        }
    }
    return result;
}