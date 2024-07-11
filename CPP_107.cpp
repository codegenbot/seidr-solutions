int even_count = 0;
        int odd_count = 0;
        for (int i = 1; i <= n; ++i) {
            string num_str = to_string(i);
            string rev_num_str = num_str;
            reverse(rev_num_str.begin(), rev_num_str.end());
            if (num_str == rev_num_str) {
                if (i % 2 == 0) {
                    even_count++;
                } else {
                    odd_count++;
                }
            }
        }
        return {even_count, odd_count};
    }