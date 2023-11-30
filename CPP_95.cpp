bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLower = true;
    bool allUpper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(key.empty()){
            continue;
        }
        
        if(key[0] >= 'a' && key[0] <= 'z'){
            allUpper = false;
        } else if(key[0] >= 'A' && key[0] <= 'Z'){
            allLower = false;
        } else {
            return false;
        }
    }
    
    return allLower || allUpper;
}