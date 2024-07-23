string make_palindrome(string str){
    string palin = str;
    for(int i = str.length()-1; i >= 0; i--){
        if(is_palindrome(str.substr(i))){
            palin += string(str.begin(), str.begin() + i);
            break;
        }
    }
    return palin;
}