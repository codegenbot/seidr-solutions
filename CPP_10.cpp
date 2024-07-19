string make_palindrome(string str){
    int n = str.length();
    if(n == 0) return "";
    
    int l = 0;
    for(int i = n-1; i >= 0; i--){
        if(is_palindrome(str.substr(0,i+1))){
            l = i;
            break;
        }
    }
    
    string prefix = str.substr(0,l);
    string postfix = str.substr(l);
    
    string reverse_prefix(prefix.rbegin(), prefix.rend());
    
    return str + reverse_prefix;
}