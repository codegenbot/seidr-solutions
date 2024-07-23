string make_palindrome(string str){
    if(str.empty()) return str;
    int n = str.size();
    int i = n - 1;
    while(i >= 0 && str[i] != str[0]) i--;
    string prefix = str.substr(0, i + 1);
    string postfix = str.substr(i + 1);
    return prefix + string(str.rbegin(), str.rend()) + postfix;
}