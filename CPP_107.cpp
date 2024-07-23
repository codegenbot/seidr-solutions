vector<int> result;
    int count_even = 0, count_odd = 0;
    for (int i = 1; i <= n; ++i) {
        string num_str = to_string(i);
        string rev_num_str = string(num_str.rbegin(), num_str.rend());
        if (num_str == rev_num_str) {
            if (i % 2 == 0) {
                count_even++;
            } else {
                count_odd++;
            }
        }
    }
    result.push_back(count_even);
    result.push_back(count_odd);
    return result;
}