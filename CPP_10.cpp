string make_palindrome(string str){
    int n = str.length();
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    string palin_str = str + rev_str;
    return palin_str;
}