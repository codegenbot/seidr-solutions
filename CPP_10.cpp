string make_palindrome(string str){
    if(str.empty()) return str;
    for(int i=str.size()-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            string prefix = str.substr(0,i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return str;
}