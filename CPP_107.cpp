int count_even = 0, count_odd = 0;
    for (int i = 1; i <= n; ++i) {
        string num_str = to_string(i);
        string rev_str = num_str;
        reverse(rev_str.begin(), rev_str.end());
        if (num_str == rev_str) {
            if (i % 2 == 0) {
                count_even++;
            } else {
                count_odd++;
            }
        }
    }
    return {count_even, count_odd};
}