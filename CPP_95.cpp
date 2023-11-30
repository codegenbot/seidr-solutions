bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto &entry : dict){
        string key = entry.first;
        
        if(!(isLower || isUpper)) {
            return false;
        }
        
        if(isLower){
            for(char c : key){
                if(!islower(c)){
                    isLower = false;
                    break;
                }
            }
        }
        
        if(isUpper){
            for(char c : key){
                if(!isupper(c)){
                    isUpper = false;
                    break;
                }
            }
        }
    }
    
    return isLower || isUpper;
}