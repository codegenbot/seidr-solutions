bool check_dict_case(map<string,string> dict){
    if(dict.empty()){
        return false;
    }
    
    bool allLowerCase = true;
    bool allUpperCase = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(key.empty() || key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != string::npos){
            allLowerCase = false;
        }
        
        if(key.empty() || key.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos){
            allUpperCase = false;
        }
        
        if(!allLowerCase && !allUpperCase){
            return false;
        }
    }
    
    return true;
}