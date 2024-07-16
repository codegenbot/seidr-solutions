string make_palindrome(string str){
    string pal = str;
    for(int i=str.length()-1; i>=0; i--){
        if(is_palindrome(str.substr(i))){
            pal += string(str.begin(), str.begin() + i);
            break;
        }
    }
    return pal;
}