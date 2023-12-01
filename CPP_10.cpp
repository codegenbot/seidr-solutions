string make_palindrome(string str){
    string prefix = "";
    for(int i = str.length()-1; i >= 0; i--){
        if(is_palindrome(str.substr(i))){
            prefix = str.substr(0, i);
            break;
        }
    }
    string palindrome = str + string(prefix.rbegin(), prefix.rend());
    return palindrome;
}