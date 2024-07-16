string make_palindrome(string str){
    string palindrome = str;
    for (int i = str.size() - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            palindrome += string(str.rbegin(), str.rbegin() + i);
            break;
        }
    }
    return palindrome;
}