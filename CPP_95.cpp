bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(key != string(key.size(), tolower(key[0]))){
            all_lower = false;
        }
        
        if(key != string(key.size(), toupper(key[0]))){
            all_upper = false;
        }
        
        if(!all_lower && !all_upper){
            return false;
        }
    }
    
    return true;
}