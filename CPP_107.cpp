int even = 0;
    int odd = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        string rev_str(str.rbegin(), str.rend());
        
        if (str == rev_str) {
            if (i % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }
    
    return {even, odd};
}