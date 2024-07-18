string make_palindrome(string str){
    if(str.empty()) return "";
    string rev(str.rbegin(), str.rend());
    for(int i=str.size();i>=0;i--){
        if(is_palindrome(str.substr(i))){
            return str+rev.substr(0, str.size()-i);
        }
    }
    return "";
}