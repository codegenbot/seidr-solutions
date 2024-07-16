string make_palindrome(string str){
    string s(str.rbegin(),str.rend());
    for(int i=0; i<str.length(); i++){
        if(str.substr(i)==s.substr(0,str.length()-i)){
            return str+s.substr(str.length()-i);
        }
    }
    return str+s.substr(1);
}