string make_palindrome(string str){
    if (str.empty()) return str;
    int n = str.size();
    int i = n - 1;
    while (i >= 0 && !is_palindrome(str.substr(i))) {
        i--;
    }
    return str + string(str.begin(), str.begin() + i);
}