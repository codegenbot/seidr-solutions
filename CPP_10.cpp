string make_palindrome(string str){
    if(str.empty()) return str;
    int n = str.size();
    int i = n - 1;
    while(i >= 0 && !is_palindrome(str.substr(0, i + 1))) {
        i--;
    }
    string prefix = str.substr(i + 1, n - i - 1);
    string result = str + string(prefix.rbegin(), prefix.rend());
    return result;
}