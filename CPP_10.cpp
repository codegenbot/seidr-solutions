string make_palindrome(string str){
    string palindrome = str;
    int n = str.length();
    for(int i = n - 1; i >= 0; i--){
        if(is_palindrome(str.substr(i))){
            palindrome += str.substr(0, i);
            break;
        }
    }
    return palindrome;
}