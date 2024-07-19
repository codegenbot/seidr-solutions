int count_palindrome(int num) {
        string s = to_string(num);
        int n = s.size();
        for (int i = 0; i < n / 2; ++i) {
            if (s[i] != s[n - 1 - i]) {
                return 0;
            }
        }
        return 1;
    }

    vector<int> even_odd_palindrome(int n) {
        vector<int> result(2, 0);
        for (int i = 1; i <= n; ++i) {
            if (count_palindrome(i)) {
                if (i % 2 == 0) {
                    result[0]++;
                } else {
                    result[1]++;
                }
            }
        }
        return result;
    }