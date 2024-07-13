int firstNegative(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j <= i; ++j) {
            sum += v[j];
            if (sum < 0)
                return j;
        }
    }
    return -1;
}