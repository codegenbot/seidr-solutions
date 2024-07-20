string flip_case(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(c >= 'a' && c <= 'z') // lowercase to uppercase
            c -= ('a' - 'A');
        else if(c >= 'A' && c <= 'Z') // uppercase to lowercase
            c += ('a' - 'A');
        result += c;
    }
    return result;
}