string make_palindrome(string str){
    int n = str.size();
    for(int i = n; i >= 0; --i){
        if(is_palindrome(str.substr(0, i))){
            string suffix = str.substr(i);
            reverse(suffix.begin(), suffix.end());
            return str + suffix;
        }
    }
    return str; // In case the input string is empty
}