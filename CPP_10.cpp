string make_palindrome(string str){
    string palindrome = str;
    int i = str.length() - 1;
    while(i >= 0 && str[i] == str[str.length() - i - 1]){
        i--;
    }
    for(int j = i; j >= 0; j--){
        palindrome += str[j];
    }
    return palindrome;
}