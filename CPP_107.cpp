vector<int> even_odd_palindrome(int n){
        vector<int> ans(2, 0);
        for(int i=1; i<=n; ++i){
            string s = to_string(i);
            string rev = s;
            reverse(rev.begin(), rev.end());
            if(s == rev){
                if(i % 2 == 0){
                    ans[0]++;
                } else {
                    ans[1]++;
                }
            }
        }
        return ans;
    }