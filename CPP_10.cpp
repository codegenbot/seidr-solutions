string make_palindrome(string str){
    if(str.empty()) return str;
    int i = str.size() - 1;
    while(i >= 0 && str[i] == str.back())
        i--;
    string palindrome_suffix = str.substr(i + 1);
    string prefix = str.substr(0, i + 1);
    string reverse_prefix(prefix.rbegin(), prefix.rend());
    return str + reverse_prefix;
}