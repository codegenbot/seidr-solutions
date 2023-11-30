bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(key[0] >= 'a' && key[0] <= 'z'){
            allUpperCase = false;
        }
        else if(key[0] >= 'A' && key[0] <= 'Z'){
            allLowerCase = false;
        }
        else{
            return false;
        }
    }
    
    return allLowerCase || allUpperCase;
}