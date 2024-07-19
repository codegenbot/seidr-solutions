string make_palindrome(string str){
    string palin = str;
    for(int i=str.length()-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            palin += str.substr(0,i);
            break;
        }
    }
    return palin;
}