int count_palindromes = 0;
    for(int i = 1; i <= n; i++){
        string str = to_string(i);
        bool is_palindrome = true;
        for(int j = 0; j < str.length() / 2; j++){
            if(str[j] != str[str.length() - 1 - j]){
                is_palindrome = false;
                break;
            }
        }
        if(is_palindrome){
            if(i % 2 == 0){
                count_palindromes += 1;
            }
            else{
                count_palindromes += 1;
            }
        }
    }
    return {(count_palindromes + 1) / 2, count_palindromes / 2};
}