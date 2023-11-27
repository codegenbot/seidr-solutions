string make_palindrome(string str){
    string prefix = "";
    for(int i = str.length() - 1; i >= 0; i--){
        string substring = str.substr(0, i);
        if(is_palindrome(substring)){
            prefix = substring;
            break;
        }
    }
    string palindrome = str + string(prefix.rbegin(), prefix.rend());
    return palindrome;
}