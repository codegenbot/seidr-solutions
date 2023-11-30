bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(!isLower && !isUpper){
            return false;
        }
        
        if(isLower && !islower(key[0])){
            isLower = false;
        }
        
        if(isUpper && !isupper(key[0])){
            isUpper = false;
        }
    }
    
    return true;
}