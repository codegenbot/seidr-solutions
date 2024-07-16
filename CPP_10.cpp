string make_palindrome(string str){
    if(str.empty()) return str;
    string s(str.rbegin(),str.rend());
    for(int i=0; i<str.size(); i++){
        if(str.substr(i)==s.substr(0, str.size()-i)){
            return str+s.substr(str.size()-i);
        }
    }
    return str+s;
}