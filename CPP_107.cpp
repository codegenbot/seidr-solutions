vector<int> even_odd_palindrome(int n){
        int even = 0, odd = 0;
        for(int i = 1; i <= n; ++i){
            string s = to_string(i);
            bool isPalindrome = true;
            for(int j = 0; j < s.length()/2; ++j){
                if(s[j] != s[s.length()-1-j]){
                    isPalindrome = false;
                    break;
                }
            }
            if(isPalindrome && i % 2 == 0){
                even++;
            }
            if(isPalindrome && i % 2 != 0){
                odd++;
            }
        }
        return {even, odd};
    }