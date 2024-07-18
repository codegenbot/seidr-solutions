vector<int> a;
    for (int i = 1; i <= n; ++i) {
        a.push_back(i * i - i + 1);
    }

    int count = 0;
    for (int i = 0; i < n-2; ++i) {
        for (int j = i + 1; j < n-1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if ((a[i] + a[j] + a[k]) % 3 == 0) {
                    count++;
                }
            }
        }
    }

    return count;
}