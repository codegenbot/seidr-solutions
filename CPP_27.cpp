std::string flipCase(const std::string& str){
    std::string result;
    for(int i=0; i<str.length(); i++){
        if(std::islower(str[i])){
            result += toupper((char)str[i]);
        } else {
            result += tolower((char)str[i]);
        }
    }
    return result;
}