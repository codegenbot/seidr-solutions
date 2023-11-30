string make_palindrome(string str){
    int n = str.length();
    int i = n - 1;
    while (i >= 0 && str[i] == str[n - 1 - i]) {
        i--;
    }
    string prefix = str.substr(0, i + 1);
    string palindrome = prefix + string(str.rbegin(), str.rend());
    return palindrome;
}