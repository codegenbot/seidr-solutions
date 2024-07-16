string make_palindrome(string str){
    string rev_str(str.rbegin(),str.rend());
    int n = str.length();
    for(int i=n-1;i>=0;i--){
        if(str.substr(0,i+1)==rev_str.substr(n-i-1)){
            return str+rev_str.substr(0,n-i-1);
        }
    }
    return "";
}