string make_palindrome(string str){
    int n = str.length();
    string prefix = "";
    for(int i = n-1; i >= 0; i--){
        if(is_palindrome(str.substr(0, i+1))){
            prefix = str.substr(i+1, n-(i+1));
            break;
        }
    }
    string palindrome = str + string(prefix.rbegin(), prefix.rend());
    return palindrome;
}