bool check_dict_case(map<string,string> dict){
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
        
        if(key != toLower(key)){
            isLowerCase = false;
        }
        
        if(key != toUpper(key)){
            isUpperCase = false;
        }
        
        if(!isLowerCase && !isUpperCase){
            return false;
        }
    }
    
    return true;
}