string make_palindrome(string str){
    if(str.empty()) return "";
    for(int i=str.size()-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            return str + string(str.rbegin(), str.rbegin() + i);
        }
    }
    return str + string(str.rbegin() + 1, str.rend());
}