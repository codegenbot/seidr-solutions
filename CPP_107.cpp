vector<int> even_odd_palindrome(int n){
        vector<int> res(2, 0);
        
        for (int i = 1; i <= n; ++i) {
            string num = to_string(i);
            string rev_num = num;
            reverse(rev_num.begin(), rev_num.end());
            
            if (num == rev_num) {
                if ((i & 1) == 0) {
                    res[0]++;
                } else {
                    res[1]++;
                }
            }
        }
        
        return res;
    }