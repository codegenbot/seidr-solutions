string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z') c -= 32;
        else if(c >= 'A' && c <= 'Z') c += 32;
        result += c;
    }
    return result;
}