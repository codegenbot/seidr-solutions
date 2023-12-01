bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto itr = dict.begin(); itr != dict.end(); ++itr){
        string key = itr->first;
        
        if(key.size() == 0){
            continue;
        }
        
        if(islower(key[0])){
            allUpperCase = false;
        }else if(isupper(key[0])){
            allLowerCase = false;
        }else{
            return false;
        }
    }
    
    return allLowerCase || allUpperCase;
}