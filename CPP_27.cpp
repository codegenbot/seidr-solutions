std::string flip_case(std::string str){
    std::string result;
    for(int i=0; i<str.length(); i++){
        char c = str[i];
        if(std::isalpha(c)){ 
            if(std::tolower(c) == c){ 
                result += std::toupper(c);
            }
            else{
                result += std::tolower(c); 
            }
        }
        else{ 
            result += c;
        }
    }
    return result;
}