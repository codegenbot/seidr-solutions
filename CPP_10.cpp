string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    string palin_suffix;
    for (int i = str.size(); i >= 0; --i) {
        string prefix = str.substr(0, i);
        string suffix = str.substr(i);
        if (is_palindrome(suffix)) {
            palin_suffix = suffix;
            break;
        }
    }
    return str + string(rev_str.begin(), rev_str.begin() + (str.size() - palin_suffix.size()));
}