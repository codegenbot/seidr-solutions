string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    for (int i = str.length(); i >= 0; i--) {
        if (is_palindrome(str.substr(i))) {
            return str + rev_str.substr(0, str.length() - i);
        }
    }
    return "";
}