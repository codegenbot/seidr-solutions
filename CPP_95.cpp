bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        bool hasLower = false;
        bool hasUpper = false;
        
        for(char c : key){
            if(islower(c)) hasLower = true;
            if(isupper(c)) hasUpper = true;
        }
        
        if(hasLower && hasUpper) return false;
        
        if(hasLower) isUpper = false;
        if(hasUpper) isLower = false;
    }
    
    return isLower || isUpper;
}