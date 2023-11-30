bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto it = dict.begin(); it != dict.end(); ++it){
        string key = it->first;
        
        if(!(key == string(key.size(), tolower(key[0])))){
            allLowerCase = false;
        }
        
        if(!(key == string(key.size(), toupper(key[0])))){
            allUpperCase = false;
        }
        
        if(!allLowerCase && !allUpperCase){
            return false;
        }
    }
    
    return true;
}