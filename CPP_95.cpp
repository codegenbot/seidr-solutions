bool check_dict_case(map<string,string> dict) {
    if(dict.empty()) {
        return false;
    }
    
    bool isLowerCase = true;
    bool isUpperCase = true;
    
    for(auto const& pair : dict) {
        for(char c : pair.first) {
            if(islower(c)) {
                isUpperCase = false;
            } else if(isupper(c)) {
                isLowerCase = false;
            }
        }
    }
    
    return isLowerCase || isUpperCase;
}