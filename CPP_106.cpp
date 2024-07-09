Here is the solution:

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // even
            long long factorial = 1;
            for (int j = 1; j <= i; j++)
                factorial *= j;
            result[i - 1] = static_cast<int>(factorial);
        } else { // odd
            int sum = 0;
            for (int j = 1; j <= i; j++)
                sum += j;
            result[i - 1] = sum;
        }
    }
    return result;
}