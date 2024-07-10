string make_palindrome(string str){
    int n = str.length();
    for(int i=n-1; i>=0; i--){
        string suffix = str.substr(i);
        if(is_palindrome(suffix)){
            string prefix = str.substr(0, i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return str;
}