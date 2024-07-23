bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(const auto& pair : dict){
        string key = pair.first;
        
        if(!key.empty()){
            if(islower(key[0])){
                all_uppercase = false;
            } else if(isupper(key[0])){
                all_lowercase = false;
            } else {
                return false;
            }
        }
    }
    
    return all_lowercase || all_uppercase;
}