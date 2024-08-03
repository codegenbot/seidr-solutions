std::string flip_case(std::string str){
    for(int i=0; i<str.length(); i++){
        if(std::isalpha(str[i])){
            if(std::islower(str[i])){
                str[i] = std::toupper(str[i]);
            }
            else{
                str[i] = std::tolower(str[i]);
            }
        }
    }
    return str;
}