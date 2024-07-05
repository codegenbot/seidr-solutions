string make_palindrome(string str){
    int len = str.size();
    if(is_palindrome(str)) return str;
    for(int i = len - 1; i > 0; i--){
        if(is_palindrome(str.substr(0,i))){
            string prefix = str.substr(i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    // If no postfix is a palindrome, return the string with everything reversed (which should cover edge cases)
    string rev(str.rbegin(), str.rend());
    return str + rev;
}