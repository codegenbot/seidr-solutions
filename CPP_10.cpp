string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    string palindrome = str;
    for(int i = 0; i < str.length(); ++i){
        if(is_palindrome(str.substr(i))){
            palindrome += rev_str.substr(0, str.length() - i);
            break;
        }
    }
    return palindrome;
}