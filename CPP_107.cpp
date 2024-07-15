vector<int> even_odd_palindrome(int n){
        vector<int> res(2, 0);
        for (int i = 1; i <= n; ++i) {
            string str = to_string(i);
            string rev = string(str.rbegin(), str.rend());
            if (str == rev) {
                if (i % 2 == 0) {
                    ++res[0]; // even palindrome
                } else {
                    ++res[1]; // odd palindrome
                }
            }
        }
        return res;
    }