bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLower = true;
    bool isUpper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(key != tolower(key)){
            isLower = false;
        }
        
        if(key != toupper(key)){
            isUpper = false;
        }
        
        if(!isLower && !isUpper){
            return false;
        }
    }
    
    return true;
}