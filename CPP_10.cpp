string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    string palindrome = str;
    for(int i = 0; i < str.length(); ++i){
        if(str.substr(0, i+1) == rev_str.substr(rev_str.length()-i-1)){
            palindrome = str + rev_str.substr(0, rev_str.length()-i-1);
            break;
        }
    }
    return palindrome;
}