std::string flip_case(std::string str){
    std::string result = "";
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z')
            result += toupper(ch);
        else if(ch >= 'A' && ch <= 'Z')
            result += tolower(ch);
        else
            result += ch;
    }
    return result;
}