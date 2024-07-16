string make_palindrome(string str){
    if(str.empty()) return "";
    
    int n = str.size();
    int i = n - 1;
    while(i >= 0 && !is_palindrome(str.substr(i))) {
        i--;
    }
    
    string prefix = str.substr(0, i);
    string palindrome_suffix(str.rbegin(), str.rbegin() + n - i);
    
    return str + palindrome_suffix;
}