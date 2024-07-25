string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    for (int i = 0; i < str.size(); ++i){
        if (str.substr(i) == rev_str.substr(0, str.size() - i)){
            return str + rev_str.substr(str.size() - i);
        }
    }
    return str;
}