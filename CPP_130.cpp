vector<int> tri(int n) {
    vector<int> result(1);
    if (n > 0) {
        result.push_back(3);
        for (int i = 2; i <= n; i++) {
            int val;
            if (i % 2 == 0)
                val = 1 + i / 2;
            else
                val = result[i - 1] + result[i - 2];
            result.push_back(val);
        }
    }
    return result;
}