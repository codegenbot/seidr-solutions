bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto& entry : dict){
        string key = entry.first;
        
        if(key != toLowerCase(key)){
            isLower = false;
        }
        
        if(key != toUpperCase(key)){
            isUpper = false;
        }
        
        if(!isLower && !isUpper){
            return false;
        }
    }
    
    return true;
}