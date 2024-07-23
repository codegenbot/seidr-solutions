string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    string palindrome_suffix = str;
    for (int i = str.length() - 1; i >= 0; i--) {
        if (is_palindrome(str.substr(i))) {
            palindrome_suffix = str.substr(i);
            break;
        }
    }
    return str + string(str.rbegin(), str.rend() - palindrome_suffix.begin());
}