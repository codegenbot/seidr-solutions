bool check_map_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool lowerCaseKeys = true;
    bool upperCaseKeys = true;
    
    for(auto it = dict.begin(); it != dict.end(); it++){
        string key = it->first;
        
        if(key != "" && !islower(key[0])){
            lowerCaseKeys = false;
        }
        
        if(key != "" && !isupper(key[0])){
            upperCaseKeys = false;
        }
    }
    
    return lowerCaseKeys || upperCaseKeys;
}