string make_palindrome(string str){
    string palindrome;
    for(int i=str.length()-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            palindrome = str + string(str.rbegin(), str.rbegin() + (str.length()-1-i));
            break;
        }
    }
    return palindrome;
}