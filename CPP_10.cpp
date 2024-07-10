string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    string palindrome = str;
    for (int i = 0; i < str.size(); ++i) {
        if (str.substr(0, str.size() - i) == rev_str.substr(i)) {
            palindrome += rev_str.substr(0, i);
            break;
        }
    }
    return palindrome;
}