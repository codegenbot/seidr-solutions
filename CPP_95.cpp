bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLowerCase = true;
    bool isUpperCase = true;
    
    for(auto const& entry : dict){
        string key = entry.first;
        
        if(key.empty()){
            continue;
        }
        
        if(isLowerCase && !islower(key[0])){
            isLowerCase = false;
        }
        
        if(isUpperCase && !isupper(key[0])){
            isUpperCase = false;
        }
        
        if(!isLowerCase && !isUpperCase){
            return false;
        }
    }
    
    return true;
}