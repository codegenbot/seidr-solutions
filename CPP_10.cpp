string make_palindrome(string str){
    if(str.empty()) return "";
    
    int n = str.size();
    int i = n - 1;
    while(i >= 0){
        if(is_palindrome(str.substr(i))){
            break;
        }
        i--;
    }
    
    string prefix = str.substr(0, i);
    string suffix = str.substr(i);
    
    return str + string(prefix.rbegin(), prefix.rend()) + suffix;
}