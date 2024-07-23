string make_palindrome(string str){
    string rev_str = string(str.rbegin(), str.rend());
    for (int i = 1; i < str.size(); ++i) {
        if (is_palindrome(str.substr(i))) {
            return str + rev_str.substr(0, i);
        }
    }
    return str;
}