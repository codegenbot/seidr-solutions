bool check_dict_case(map<string,string> dict){
    if(dict.empty()) return false;
    
    bool all_lowercase = true;
    bool all_uppercase = true;
    
    for(auto const& pair : dict){
        string key = pair.first;
        
        for(char c : key){
            if(islower(c)){
                all_uppercase = false;
            } else if(isupper(c)){
                all_lowercase = false;
            }
        }
    }
    
    return all_lowercase || all_uppercase;
}