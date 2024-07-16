string make_palindrome(string str){
    int n = str.size();
    if(n==0) return str;
    int i = n-1;
    while(i>=0 && str[i]==str[n-1]) i--;
    string suffix = str.substr(i+1);
    string prefix(str.begin(),str.begin()+i+1);
    string rev_prefix(prefix.rbegin(),prefix.rend());
    return prefix + suffix + rev_prefix;
}