long long result = 1;
    while (n > 0) {
        long long factorial = 1;
        for (int i = n; i > 0; --i) {
            factorial *= i;
        }
        result *= factorial;
        n--;
    }
    return result;
}