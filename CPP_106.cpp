vector<int> result(n);
    int sum = 0, factorial = 1;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (i == 0) result[i] = 1; // 0! = 1
            else {
                factorial *= i;
                result[i] = factorial;
            }
        } else {
            sum += i;
            result[i] = sum;
        }
    }
    return result;
}