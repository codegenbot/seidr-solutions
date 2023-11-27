bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }

    bool allLower = true;
    bool allUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(islower(key[0])){
            allUpper = false;
        } else if(isupper(key[0])){
            allLower = false;
        } else{
            return false;
        }
    }
    
    return allLower || allUpper;
}