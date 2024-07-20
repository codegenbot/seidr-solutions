string make_palindrome(string str){
    if(str.empty()) return "";
    
    int n = str.size();
    int i = n - 1;
    while(i >= 0 && !is_palindrome(str.substr(i))) {
        i--;
    }
    
    string prefix = str.substr(0, i+1);
    string suffix = str.substr(i);
    
    string rev_prefix(prefix.rbegin(), prefix.rend());
    
    return str + rev_prefix;
}