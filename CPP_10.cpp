string make_palindrome(string str){
    int n = str.length();
    string rev_str = string(str.rbegin(), str.rend());
    string pal_str = str;
    
    for(int i = n-1; i >= 0; i--){
        if(is_palindrome(pal_str)){
            break;
        }
        pal_str += rev_str[i];
    }
    
    return pal_str;
}