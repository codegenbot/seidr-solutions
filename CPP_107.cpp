int even_count = 0, odd_count = 0;
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        string rev_str = str;
        reverse(rev_str.begin(), rev_str.end());
        if (str == rev_str) {
            if (i % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
    }
    return {even_count, odd_count};
}