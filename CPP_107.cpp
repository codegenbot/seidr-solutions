vector<int> result = {0, 0};
    for (int i = 1; i <= n; ++i) {
        string num = to_string(i);
        if (num == string(num.rbegin(), num.rend())) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}