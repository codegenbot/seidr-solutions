vector<int> even_odd_palindrome(int n) {
    int even_count = 0, odd_count = 0;
    
    auto is_palindrome = [](int num) {
        string s = to_string(num);
        string rev_s = string(s.rbegin(), s.rend());
        return s == rev_s;
    };
    
    for (int i = 1; i <= n; ++i) {
        if (is_palindrome(i)) {
            if (i % 2 == 0) {
                ++even_count;
            } else {
                ++odd_count;
            }
        }
    }
    
    return {even_count, odd_count};
}