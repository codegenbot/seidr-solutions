string make_palindrome(string str){
    int n = str.length();
    if(n==0) return "";
    string rev_str(str.rbegin(), str.rend());
    for(int i=1; i<n; ++i){
        if(str.substr(0, n-i) == rev_str.substr(i)){
            return str + rev_str.substr(0, i);
        }
    }
    return str + rev_str.substr(1);
}