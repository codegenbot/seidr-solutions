bool check_dict_case(map<string,string> dict){
    if(dict.empty()) {
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        
        if(key.empty()) {
            continue;
        }
        
        if(key != toLower(key)) {
            allLowerCase = false;
        }
        
        if(key != toUpper(key)) {
            allUpperCase = false;
        }
        
        if(!allLowerCase && !allUpperCase) {
            return false;
        }
    }
    
    return true;
}