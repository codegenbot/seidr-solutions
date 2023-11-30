bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(!key.empty() && islower(key[0])){
            allUpperCase = false;
        }
        else if(!key.empty() && isupper(key[0])){
            allLowerCase = false;
        }
    }
    
    return allLowerCase || allUpperCase;
}