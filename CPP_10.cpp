string make_palindrome(string str){
    if(str.empty()) return str;
    int n = str.size();
    int i = n - 1;
    while(i >= 0 && str[i] == str[n - 1]) i--;
    string palindrome = str.substr(i + 1);
    reverse(str.begin(), str.begin() + i + 1);
    return str + palindrome;
}