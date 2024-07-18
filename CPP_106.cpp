vector<int> result(n);
    result[0] = 1;
    int sum = 1;
    int fact = 1;
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            fact *= i;
            result[i] = fact;
        } else {
            sum += i;
            result[i] = sum;
        }
    }
    return result;
}