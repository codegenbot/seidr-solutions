vector<int> result(n);
    result[0] = 1;
    int sum = 1;

    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            result[i] = result[i - 1] * i;
        } else {
            sum += i;
            result[i] = sum;
        }
    }

    return result;
}