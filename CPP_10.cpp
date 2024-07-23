string make_palindrome(string str){
    int n = str.size();
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    
    int i;
    for(i=n; i>0; i--){
        if(is_palindrome(str.substr(n-i,i))) break;
    }
    
    return str + rev_str.substr(0,n-i);
}