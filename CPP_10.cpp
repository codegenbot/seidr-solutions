string make_palindrome(string str){
    if(str.empty()) return str;
    
    int n = str.size();
    string rev_str(str.rbegin(), str.rend());
    for(int i=0; i<n; i++){
        if(is_palindrome(str.substr(i))){
            return str + rev_str.substr(0, n-i);
        }
    }
    
    return str;
}