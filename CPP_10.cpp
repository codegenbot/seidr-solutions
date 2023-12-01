string make_palindrome(string str){
    string suffix(str.rbegin(), str.rend());
    string prefix = "";
    int i = 0;
    while (i < str.length()) {
        if (is_palindrome(str.substr(i))) {
            break;
        }
        prefix += str[i];
        i++;
    }
    return str + string(prefix.rbegin(), prefix.rend()) + suffix;
}