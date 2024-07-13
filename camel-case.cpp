std::string camelCase(std::string& str) {
    std::string result;
    bool capitalize = false;

    for (char c : str) {
        if (c == '-') {
            if(capitalize){
                result += toupper(str[str.find(c)+1]);
                capitalize = true;
            }
        } else {
            if(!capitalize){
                result += tolower(c);
                capitalize = true;
            }else{
                result += toupper(c);
                capitalize = false;
            }
        }
    }

    return result;
}