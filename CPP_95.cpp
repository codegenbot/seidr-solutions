bool check_dict_case(map<string,string> dict){
    if (dict.empty()) {
        return false;
    }
    
    bool isLowerCase = true;
    bool isUpperCase = true;
    
    for (const auto& pair : dict) {
        const string& key = pair.first;
        
        if (!isalpha(key[0])) {
            return false;
        }
        
        if (isLowerCase && !islower(key[0])) {
            isLowerCase = false;
        }
        
        if (isUpperCase && !isupper(key[0])) {
            isUpperCase = false;
        }
        
        if (!isLowerCase && !isUpperCase) {
            return false;
        }
    }
    
    return true;
}