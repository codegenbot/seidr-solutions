string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    string prefix = str.substr(0, str.length() - 1);
    return str + rev_str;
}