string make_palindrome(string str){
    if(str.empty()) return str;
    int n = str.size();
    int i = n - 1;
    while(i >= 0 && str[i] != str[0]) {
        i--;
    }
    string prefix = str.substr(0, i);
    string palindrome_suffix = str.substr(i);
    string prefix_reverse(prefix.rbegin(), prefix.rend());
    return str + prefix_reverse;
}