string make_palindrome(string str){
    if(str.empty()) return str;
    int n = str.length();
    int i = 0;
    for(i=n-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            break;
        }
    }
    string prefix = str.substr(0, i);
    string palindrome_suffix(str.rbegin(), str.rbegin() + n - i);
    return str + palindrome_suffix;
}