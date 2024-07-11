vector<int> result;
        int count_even = 0, count_odd = 0;
        for (int i = 1; i <= n; ++i) {
            string s = to_string(i);
            string rev_s = s;
            reverse(rev_s.begin(), rev_s.end());
            if (s == rev_s) {
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