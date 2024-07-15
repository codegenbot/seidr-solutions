int count_palindromes = 0;
    for (int i = 1; i <= n; ++i) {
        string num_str = to_string(i);
        string rev_num_str = num_str;
        reverse(rev_num_str.begin(), rev_num_str.end());
        if (num_str == rev_num_str) {
            count_palindromes++;
        }
    }
    
    return {count_palindromes / 2, count_palindromes - count_palindromes / 2};
}