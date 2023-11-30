bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLowerCase = true;
    bool isUpperCase = true;
    
    for(auto& pair : dict){
        string key = pair.first;
        
        if(key.empty()){
            return false;
        }
        
        for(char c : key){
            if(islower(c)){
                isUpperCase = false;
            } else if(isupper(c)){
                isLowerCase = false;
            }
        }
    }
    
    return isLowerCase || isUpperCase;
}