string make_palindrome(string str){
    string rev_str(str.rbegin(), str.rend());
    for(int i=0; i<str.length(); ++i){
        if(str.substr(i)==rev_str.substr(0, str.length()-i)){
            return str+rev_str.substr(str.length()-i);
        }
    }
    return str;
}