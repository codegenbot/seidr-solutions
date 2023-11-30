bool check_map_case(map<string,string> dict){
    if(dict.empty()) {
        return false;
    }
    bool allUpperCase = true;
    bool allLowerCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it) {
        string key = it->first;
        for(char c : key) {
            if(isalpha(c)) {
                if(islower(c)) {
                    allUpperCase = false;
                } else {
                    allLowerCase = false;
                }
            }
        }
        
        if(!(allUpperCase || allLowerCase)) {
            return false;
        }
    }
    
    return true;
}