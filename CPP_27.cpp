string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            c = (char)('A' + (c - 'a'));
        else if(c >= 'A' && c <= 'Z')
            c = (char)('a' + (c - 'A'));
        result += c;
    }
    return result;
}