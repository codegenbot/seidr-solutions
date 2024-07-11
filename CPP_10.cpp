string make_palindrome(string str){
    int n = str.length();
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    for(int i=0; i<n; i++){
        if(str.substr(0, n-i) == rev_str.substr(i)){
            return str + rev_str.substr(0, i);
        }
    }
    return "";
}