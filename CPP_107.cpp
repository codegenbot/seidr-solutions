int count_palindromes(int num) {
        int count = 0;
        for (int i = 1; i <= num; ++i) {
            string str = to_string(i);
            string rev_str = str;
            reverse(rev_str.begin(), rev_str.end());
            if (str == rev_str) {
                count++;
            }
        }
        return count;
    }

    vector<int> even_odd_palindrome(int n) {
        int even_count = 0, odd_count = 0;
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                even_count += count_palindromes(i);
            } else {
                odd_count += count_palindromes(i);
            }
        }
        return {even_count, odd_count};
    }