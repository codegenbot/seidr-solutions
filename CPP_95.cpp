bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLowerCase = true;
    bool isUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        for(char c : key){
            if(islower(c)){
                isUpperCase = false;
            } else if(isupper(c)){
                isLowerCase = false;
            } else {
                return false;
            }
        }
    }
    
    return isLowerCase || isUpperCase;
}