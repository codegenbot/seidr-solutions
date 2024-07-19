string make_palindrome(string str){
    if(str.empty()) return str;
    
    int n = str.size();
    int i = n - 1;
    while(i >= 0){
        if(is_palindrome(str.substr(i))){
            string prefix = str.substr(0, i);
            string reversed_prefix(prefix.rbegin(), prefix.rend());
            return str + reversed_prefix;
        }
        i--;
    }
    
    return str + string(str.rbegin() + 1, str.rend());
}