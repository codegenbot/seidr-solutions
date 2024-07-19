bool check_dict_case(map<string,string> dict) {
    if(dict.empty()) {
        return false;
    }
    
    bool allLower = true;
    bool allUpper = true;
    
    for(const auto& entry : dict) {
        for(const auto& c : entry.first) {
            if(islower(c)) {
                allUpper = false;
            } else if(isupper(c)) {
                allLower = false;
            }
        }
    }
    
    return allLower || allUpper;
}