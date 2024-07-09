int even_count = 0, odd_count = 0;
        for (int i = 1; i <= n; ++i) {
            string num_str = to_string(i);
            string rev_num_str = string(num_str.rbegin(), num_str.rend());
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