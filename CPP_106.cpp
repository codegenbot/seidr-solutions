vector<int> result;
    int prod = 1, sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            prod *= i;
            result.push_back(prod);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    return result;
}