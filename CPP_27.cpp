string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z'){
            result += (char)(c - ('a' - 'A'));
        } else {
            result += c;
        }
    }
    return result;
}