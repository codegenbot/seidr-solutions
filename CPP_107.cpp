int even_palindrome_count = 0;
    int odd_palindrome_count = 0;

    for(int i = 1; i <= n; ++i){
        string str_num = to_string(i);
        string rev_str_num = str_num;
        reverse(rev_str_num.begin(), rev_str_num.end());
        if(str_num == rev_str_num){
            if(i % 2 == 0){
                even_palindrome_count++;
            } else {
                odd_palindrome_count++;
            }
        }
    }

    return {even_palindrome_count, odd_palindrome_count};
}