bool check_dict_case(map<string,string> dict) {
    if(dict.empty()) {
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto const& pair : dict) {
        string key = pair.first;
        
        for(char c : key) {
            if(!islower(c)) {
                allLowerCase = false;
            }
            if(!isupper(c)) {
                allUpperCase = false;
            }
        }
    }
    
    return allLowerCase || allUpperCase;
}