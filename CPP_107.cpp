vector<int> result(2, 0);
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        if (str == string(str.rbegin(), str.rend())) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
        }
    }
    return result;
}