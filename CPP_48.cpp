bool is_palindrome(string text){
    int n = text.length();
    for(int i=0, j=n-1; i<j; i++, j--){
        if(text[i] != text[j])
            return false;
    }
    return true;
}