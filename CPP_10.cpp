string make_palindrome(string str){
    string reversed(str.rbegin(),str.rend());
    for(int i=0; i<str.size(); i++){
        if(str.substr(0, str.size()-i) == reversed.substr(i)){
            return str + reversed.substr(0, i);
        }
    }
    return str;
}