string make_palindrome(string str){
    if(str.empty()) return "";
    
    int n = str.size();
    for(int i=n-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            return str + string(str.rbegin(), str.rbegin() + n - i);
        }
    }
    
    return str + string(str.rbegin() + 1, str.rend());
}