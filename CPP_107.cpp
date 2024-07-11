vector<int> even_odd_palindrome(int n){
    int even = 0, odd = 0;
    for(int i = 1; i <= n; ++i){
        string s = to_string(i);
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        if(s == rev_s){
            if(i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    return {even, odd};
}