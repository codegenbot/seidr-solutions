bool check_dict_case(map<string,string> dict) {
    if(dict.empty()) {
        return false;
    }
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& entry : dict) {
        string key = entry.first;
        
        if(!key.empty() && isalpha(key[0])) {
            if(islower(key[0])) {
                all_upper = false;
            } else if(isupper(key[0])) {
                all_lower = false;
            }
        } else {
            return false;
        }
    }
    
    return all_lower || all_upper;
}