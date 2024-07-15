vector<int> result;
    int sum = 0;
    int factorial = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (i == 0) {
                result.push_back(1);
            } else {
                factorial *= i;
                result.push_back(factorial);
            }
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    return result;
}