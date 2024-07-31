int even = 0, odd = 0;
        for (int i = 1; i <= n; ++i) {
            string str = to_string(i);
            string revStr = str;
            reverse(revStr.begin(), revStr.end());
            if (str == revStr) {
                if (i % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }
        }
        return {even, odd};
    }