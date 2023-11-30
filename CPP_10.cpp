string make_palindrome(string str){
    int n = str.length();
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    string palindrome = str + rev_str.substr(1, n-1);
    return palindrome;
}