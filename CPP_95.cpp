bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            continue;
        }
        
        if(!isLower && !isUpper){
            return false;
        }
        
        if(isLower){
            for(char c : key){
                if(isupper(c)){
                    isLower = false;
                    break;
                }
            }
        }
        
        if(isUpper){
            for(char c : key){
                if(islower(c)){
                    isUpper = false;
                    break;
                }
            }
        }
    }
    
    return isLower || isUpper;
}