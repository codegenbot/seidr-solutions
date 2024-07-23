string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    int n = str.length();
    for(int i = 0; i < n; i++){
        if(str.substr(0, n - i) == rev_str.substr(i)){
            return str + rev_str.substr(0, i);
        }
    }
    return str;
}