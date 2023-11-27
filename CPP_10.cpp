string make_palindrome(string str){
    int n = str.length();
    string rev = str;
    reverse(rev.begin(), rev.end());
    for(int i=0; i<n; i++){
        if(is_palindrome(str.substr(i))){
            return str + rev.substr(n-i);
        }
    }
    return "";
}