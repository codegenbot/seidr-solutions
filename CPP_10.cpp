string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    string palindrome = str;
    for (int i = str.length() - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            palindrome += rev_str.substr(0, str.length() - i);
            break;
        }
    }
    return palindrome;
}