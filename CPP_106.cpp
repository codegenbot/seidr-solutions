vector<int> result;
    int prevSum = 0;
    int prevFactorial = 1;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            prevFactorial *= i;
            result.push_back(prevFactorial);
        } else {
            prevSum += i;
            result.push_back(prevSum);
        }
    }
    return result;
}