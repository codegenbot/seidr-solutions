string make_palindrome(string str){
    if(str.empty()) return "";
    
    int n = str.size();
    int i = n - 1;
    
    while(i >= 0 && str[i] == str[n - i - 1]) i--;
    
    string suffix = str.substr(i + 1);
    reverse(str.begin(), str.begin() + i + 1);
    
    return str + suffix;
}