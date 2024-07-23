string make_palindrome(string str){
    string palindrome = str;
    for (int i = str.length() - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            palindrome += str.substr(0, i);
            break;
        }
    }
    return palindrome;
}