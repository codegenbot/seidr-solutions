string make_palindrome(string str){
    if(str.empty()) return str;
    int n = str.size();
    int i = n - 1;
    while(i >= 0){
        if(is_palindrome(str.substr(i))){
            string prefix = str.substr(0, i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
        i--;
    }
    return str + str;
}