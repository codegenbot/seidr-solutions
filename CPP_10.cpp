string make_palindrome(string str){
    int n = str.length();
    if(n == 0)
        return "";
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(is_palindrome(str))
        return str;
    for(int i = 1; i < n; i++){
        string suffix = str.substr(i);
        string prefix = str.substr(0, i);
        string rev_prefix = prefix;
        reverse(rev_prefix.begin(), rev_prefix.end());
        if(is_palindrome(suffix)){
            return str + rev_prefix;
        }
    }
    return str + rev;
}