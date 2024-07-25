vector<int> result = {0, 0};
    for (int i = 1; i <= n; ++i) {
        string num_str = to_string(i);
        string rev_num_str = string(num_str.rbegin(), num_str.rend());
        if (num_str == rev_num_str) {
            if (i % 2 == 0) {
                ++result[0];
            } else {
                ++result[1];
            }
        }
    }
    return result;
}