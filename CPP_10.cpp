string make_palindrome(string str){
    int n = str.length();
    string rev_str = string(str.rbegin(), str.rend());
    for (int i = 0; i < n; i++) {
        if (str.substr(0, n - i) == rev_str.substr(i)) {
            return str + rev_str.substr(0, i);
        }
    }
    return str;
}