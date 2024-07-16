string make_palindrome(string str){
    if(str.empty()) return "";
    int n = str.size();
    int i = 0;
    for(i=n-1; i>=0; --i){
        if(is_palindrome(str.substr(i))){
            break;
        }
    }
    string prefix = str.substr(0,i);
    string suffix = str.substr(i);
    string palindrome = prefix + string(suffix.rbegin(), suffix.rend()) + suffix;
    return palindrome;
}