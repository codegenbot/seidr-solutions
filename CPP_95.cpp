bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool isLowerCase = true;
    bool isUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); it++){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(key != tolower(key)){
            isLowerCase = false;
        }
        
        if(key != toupper(key)){
            isUpperCase = false;
        }
    }
    
    return isLowerCase || isUpperCase;
}