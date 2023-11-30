bool check_map_case(map<string,string> dict) {
    if(dict.empty()) {
        return false;
    }
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto& pair : dict) {
        string key = pair.first;
        
        for(char c : key) {
            if(islower(c)) {
                isUpper = false;
            }
            else if(isupper(c)) {
                isLower = false;
            }
        }
    }
    
    return isLower || isUpper;
}