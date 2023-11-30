bool check_map_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(key.empty()){
            return false;
        }
        
        if(key != tolower(key)){
            all_lowercase = false;
        }
        
        if(key != toupper(key)){
            all_uppercase = false;
        }
    }
    
    return all_lowercase || all_uppercase;
}