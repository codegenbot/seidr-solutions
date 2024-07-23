string make_palindrome(string str){
    if(str.empty()) return str;
    int n = str.size();
    int i = n-1;
    while(i >= 0 && str[i] == str[n-1]) i--;
    string prefix = str.substr(0, i+1);
    string suffix = str.substr(i+1);
    return prefix + string(str.rbegin(), str.rend()) + suffix;
}