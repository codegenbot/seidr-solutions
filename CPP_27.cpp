std::string flip_case(std::string str){
    std::string result = "";
    for(char c : str){
        if(c >= 'a' && c <= 'z'){
            result += toupper(c);
        } else {
            result += tolower(c);
        }
    }
    return result;
}