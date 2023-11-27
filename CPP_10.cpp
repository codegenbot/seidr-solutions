string make_palindrome(string str){
    int n = str.length();
    int i = n - 1;
    while (i >= 0 && str[i] == str[n - 1 - i]) {
        i--;
    }
    string palindrome = str;
    for (int j = i; j >= 0; j--) {
        palindrome += str[j];
    }
    return palindrome;
}