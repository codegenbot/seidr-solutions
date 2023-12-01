bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool lowerCase = true;
    bool upperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(!islower(key[0])){
            lowerCase = false;
        }
        
        if(!isupper(key[0])){
            upperCase = false;
        }
        
        if(!lowerCase && !upperCase){
            return false;
        }
    }
    
    return true;
}