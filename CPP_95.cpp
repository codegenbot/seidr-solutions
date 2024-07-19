bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        if(!key.empty() && key == string(key.size(), tolower(key[0]))){
            all_upper = false;
        } else if(!key.empty() && key == string(key.size(), toupper(key[0]))){
            all_lower = false;
        } else {
            return false;
        }
    }
    
    return all_lower || all_upper;
}