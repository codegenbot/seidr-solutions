string make_palindrome(string str){
    if(str.empty()) return "";
    int n = str.size();
    int i = n - 1;
    for(; i >= 0; --i){
        if(is_palindrome(str.substr(i))){
            break;
        }
    }
    string prefix = str.substr(0, i);
    string suffix = str.substr(i);
    string rev_prefix(prefix.rbegin(), prefix.rend());
    return str + rev_prefix;
}