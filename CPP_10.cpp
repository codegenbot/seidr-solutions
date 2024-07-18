string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    for (int i = str.length(); i >= 0; i--){
        string suffix = str.substr(i);
        if (is_palindrome(suffix)){
            return str + rev_str.substr(0, str.length()-i);
        }
    }
    return str;
}