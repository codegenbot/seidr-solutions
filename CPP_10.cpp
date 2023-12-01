string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    string prefix = "";
    int len = str.length();
    
    for (int i = len; i >= 0; i--) {
        if (is_palindrome(str.substr(0, i))) {
            prefix = str.substr(i);
            break;
        }
    }
    
    return str + prefix + rev_str;
}