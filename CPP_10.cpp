string make_palindrome(string str){
    int n = str.length();
    for(int i=n-1;i>=0;i--){
        if(is_palindrome(str.substr(i))){
            return str + string(str.rbegin(), str.rbegin() + n - i);
        }
    }
    return str;
}