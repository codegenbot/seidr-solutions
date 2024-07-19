string make_palindrome(string str){
    if(str.empty()) return "";
    int n = str.length();
    for(int i=n-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            return str + string(str.begin(), str.begin()+i);
        }
    }
    return "";
}