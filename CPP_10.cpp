string make_palindrome(string str){
    if(str.empty()) return str;
    int n = str.length();
    int i = n - 1;
    while(i >= 0 && str[i] == str[0]) {
        i--;
    }
    string palindrome_suffix = str.substr(i + 1);
    string prefix = str.substr(0, i + 1);
    string prefix_reverse(prefix.rbegin(), prefix.rend());
    return str + prefix_reverse;
}