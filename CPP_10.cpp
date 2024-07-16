string make_palindrome(string str){
    if(str.empty()) return "";
    
    int n = str.size();
    int i = 0;
    for(i=n-1; i>=0; --i){
        int j = 0;
        bool isPalindrome = true;
        while(j < i){
            if(str[j] != str[i-j]){
                isPalindrome = false;
                break;
            }
            ++j;
        }
        if(isPalindrome) break;
    }
    
    string prefix = str.substr(0, i+1);
    string suffix = str.substr(i+1);
    reverse(prefix.begin(), prefix.end());
    
    return str + prefix;
}