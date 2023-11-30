string make_palindrome(string str){
    string suffix(str.rbegin(), str.rend());
    string prefix = "";
    for(int i = str.length() - 1; i >= 0; i--){
        prefix += str[i];
        if(is_palindrome(suffix + prefix)){
            return str + prefix;
        }
    }
    return "";
}