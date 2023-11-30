bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        
        if(key.empty()){
            return false;
        }
        
        if(!(islower(key[0]))){
            allLowerCase = false;
        }
        
        if(!(isupper(key[0]))){
            allUpperCase = false;
        }
        
        if(!allLowerCase && !allUpperCase){
            return false;
        }
    }
    
    return true;
}