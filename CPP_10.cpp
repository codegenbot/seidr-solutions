string make_palindrome(string str){
    string rev(str.rbegin(),str.rend());
    for(int i=0; i<str.size(); i++){
        if(str.substr(0,str.size()-i)==rev.substr(i)){
            return str+rev.substr(0,i);
        }
    }
    return "";
}