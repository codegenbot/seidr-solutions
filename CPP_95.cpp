bool check_map_case(map<string,string> dict){
    
    if(dict.empty()){
        return false;
    }
    
    bool allLowercase = true;
    bool allUppercase = true;
    
    for(auto itr = dict.begin(); itr != dict.end(); itr++){
        string key = itr->first;
        
        if(key.empty()){
            return false;
        }
        
        for(char c : key){
            if(islower(c)){
                allUppercase = false;
            } else {
                allLowercase = false;
            }
        }
    }
    
    return allLowercase || allUppercase;
}