string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            c -= ('a' - 'A');
        else if(c >= 'A' && c <= 'Z')
            c += ('a' - 'A');
        result += c;
    }
    return result;
}