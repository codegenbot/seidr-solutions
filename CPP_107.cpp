vector<int> even_odd_palindrome(int n){
    int even_count = 0, odd_count = 0;
    
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i);
        string rev_s = string(s.rbegin(), s.rend());
        
        if (s == rev_s) {
            if (i % 2 == 0) {
                ++even_count;
            } else {
                ++odd_count;
            }
        }
    }
    
    return {even_count, odd_count};
}