vector<int> result;
    int sum = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum *= i;
            result.push_back(sum);
        } else {
            sum = 0;
            for (int j = 1; j <= i; j++) {
                sum += j;
            }
            result.push_back(sum);
        }
    }
    return result;
}