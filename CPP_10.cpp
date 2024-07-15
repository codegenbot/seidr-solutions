string make_palindrome(string str){
    if(str.empty()) return str;
    
    int n = str.size();
    for(int i = n-1; i >= 0; --i){
        if(is_palindrome(str.substr(i))){
            return str + string(str.begin(), str.begin() + i);
        }
    }
    return str + string(str.begin() + 1, str.end());
}