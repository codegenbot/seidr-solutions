string make_palindrome(string str){
    if(str.empty())
        return "";
    
    string palindrome;
    int n = str.size();
    for(int i=n-1; i>=0; --i){
        if(is_palindrome(str.substr(i))){
            palindrome = str + string(str.begin(), str.begin()+i);
            break;
        }
    }
    return palindrome;
}