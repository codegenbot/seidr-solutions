vector<int> even_odd_palindrome(int n){
            vector<int> res(2, 0);
            for(int i=1; i<=n; ++i){
                string s = to_string(i);
                string rev(s.rbegin(), s.rend());
                if(s == rev){
                    res[s.size() % 2]++;
                }
            }
            return res;
        }