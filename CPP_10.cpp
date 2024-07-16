string make_palindrome(string str){
    string rev_str = string(str.rbegin(), str.rend());
    string palindrome_suffix = "";
    for(int i=str.size(); i>=0; i--){
        if(is_palindrome(str.substr(i))){
            palindrome_suffix = str.substr(i);
            break;
        }
    }
    return str + string(str.begin(), str.begin() + str.size() - palindrome_suffix.size()) + rev_str;
}