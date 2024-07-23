string make_palindrome(string str){
    if(str.empty()) return "";
    string rev_str(str.rbegin(), str.rend());
    for(int i=0; i<str.size(); i++){
        if(is_palindrome(str.substr(i))){
            return str + rev_str.substr(0, str.size()-i);
        }
    }
    return str + rev_str.substr(1);
}