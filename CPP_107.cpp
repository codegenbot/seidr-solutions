vector<int> even_odd_palindrome(int n){
        vector<int> res(2, 0);
        if(n >= 1) res[1] = 1;
        for(int i = 1; i <= n; ++i){
            string s = to_string(i);
            string reversed(s.rbegin(), s.rend());
            if(s == reversed){
                if(i % 2 == 0) res[0]++;
                else res[1]++;
            }
        }
        return res;
    }