vector<int> result;
    for (int i = 1; i <= n; i++) {
        int val = 1;
        if (i % 2 == 0) {
            for (int j = 1; j <= i; j++) {
                val *= j;
            }
        } else {
            val = (i * (i + 1)) / 2;
        }
        result.push_back(val);
    }
    return result;
}